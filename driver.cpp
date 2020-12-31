#include <iostream>
#include "particle.h"
#include "visuals.h"
#include "simple2d.h"

using std::cout;
using std::endl;

const int MAX_SECONDS = 200; 
const int WIDTH = 100; //Width of simulation box
const int HEIGHT = 75; //Height of simulation box
int main()
{

	S2D_Window *window = S2D_CreateWindow(
		"Hello World!",  // title of the window
		800, 600,        // width and height
		update, render,  // callback function pointers (these can be NULL)
		0                // flags
	);
		
	Particle dog;

	
	//Run simulation for this long
	for(int i=0; i<MAX_SECONDS; i++){
	
		//For each particle
			//Flag whether or not they had a collision
			
		//For each particle that had a collision
			//Calculate their new xVec and yVec
			
		//For each particle
			//Set their new position
			
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
		
		cout<< "("<<dog.getxPos()<<","<<dog.getyPos()<<")" << endl;
	}
	
	return 0;
}
