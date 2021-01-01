#include <iostream>
#include "particle.h"
#include "gif.h"
#include <math.h>

using std::cout;
using std::endl;

const int NUM_FRAMES = 900; 
const int WIDTH = 100; 	//Width of simulation box
const int HEIGHT = 300; 	//Height of simulation box

uint8_t image[ WIDTH * HEIGHT * 4 ];
const char* filename = "./MyGif.gif";

//Helper Function
void SetPixel( int xx, int yy, uint8_t red, uint8_t grn, uint8_t blu )
{
    uint8_t* pixel = &image[(yy*WIDTH+xx)*4];
    pixel[0] = red;
    pixel[1] = blu;
    pixel[2] = grn;
    pixel[3] = 255;  // no alpha for this demo
}

void SetPixelFloat( int xx, int yy, float fred, float fgrn, float fblu )
{
    // convert float to unorm
    uint8_t red = (uint8_t)roundf( 255.0f * fred );
    uint8_t grn = (uint8_t)roundf( 255.0f * fgrn );
    uint8_t blu = (uint8_t)roundf( 255.0f * fblu );
    
    SetPixel( xx, yy, red, grn, blu );
}



int main()
{
	
	// Create a gif
	GifWriter writer = {};
	GifBegin( &writer, filename, WIDTH, HEIGHT, 2, 8, true );

		
	Particle dog;

	//Run simulation for this long
	for(int i=0; i<NUM_FRAMES; i++)
	{
		// Make an image, somehow
		// this is the default shadertoy - credit to shadertoy.com
		float tt = i * 3.14159f * 2 / 255.0f;

		//Create background color (grey)
		for( int yy=0; yy<HEIGHT; ++yy )
		{
		    for( int xx=0; xx<WIDTH; ++xx )
		    {
			float fx = xx / (float)WIDTH;
			float fy = yy / (float)HEIGHT;
			
			float red = 100;
			float grn = 100;
			float blu = 100;
			
			SetPixelFloat( xx, yy, red, grn, blu );
		    }
		}
			
		//Flip sign of x vector if collision with left or right walls of square
		if(dog.getxPos() >= WIDTH -1 || dog.getxPos() <= 1)
		{
			cout<<"Left or right collision"<<endl;
			dog.setxVec(dog.getxVec() * -1);
		}
			
		//Flip sign of y vector if collision with bottom or top walls of square
		if(dog.getyPos() >= HEIGHT -1 || dog.getyPos() <= 1)
		{
			cout<<"Up or down collision"<<endl;
			dog.setyVec(dog.getyVec() * -1);
		}
			
		dog.setxPos(dog.getxPos() + dog.getxVec());
		dog.setyPos(dog.getyPos() + dog.getyVec());
		
		
		//Render the ball
		float red = 100;
		float grn = 0;
		float blu = 0;        
		SetPixelFloat( dog.getxPos(), dog.getyPos(), red, grn, blu );


		// Write the frame to the gif
		printf( "Writing frame %d of %i...\n", i, NUM_FRAMES );
		GifWriteFrame( &writer, image, WIDTH, HEIGHT, 1, 8, true );
	}
	
	// Write EOF
	GifEnd( &writer );
	
	return 0;
}
