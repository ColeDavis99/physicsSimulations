#include "particle.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


//Default Constructor
Particle::Particle()
{
	cout<<"I'm a particle"<<endl;
}


//Return Velocity
float Particle::Velocity()
{
	return sqrt(xVec*xVec + yVec*yVec);
}
