/*
*   This is a file for simulating some basic 2D kinematics.
*   There is a world object that has an array of many particles.
*   The world has gravity too, give it an X by Y dimension for the simulation boundaries.
*   Then I guess make a bunch of particles bounce around the X and Y boundaries and 
*   do some different collision detection algorithms. Won't need gravity for that I guess.
*   Unless I want to learn how to make stuff bounce around...
*
*   Maybe allocate particle object memory dynamically? I left off at working on world class. 
*/

#include <iostream>
#include "classes\particle.h"
#include "classes\world.h"
#include <math.h>

using std::cout;
using std::endl;

const int NUM_STEPS = 100;
const int NUM_PARTICLES = 100;
const float GRAVITY_ACC = -9.807; // meters/s squared

int main()
{
    Particle pArr[NUM_PARTICLES];
    
    //Create an array of particles to be in the simulation
    for(int i=0; i<100; i++)
    {
        pArr[i] = Particle();
    }

    World earth(&pArr);


	//Run simulation
    int ctr = 0;
	for(int i=0; i<NUM_STEPS; i++)
	{
        ++ctr;
	}

    cout<<"Done: "<<ctr<<endl;
	return 0;
}
