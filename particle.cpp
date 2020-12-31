#include "particle.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


//Default Constructor
Particle::Particle()
{
	cout<<"Default Particle Constructor"<<endl;
	setxVec(5);
	setyVec(10);
	setxPos(50);
	setyPos(50);
}


//Return Velocity
float Particle::Velocity()
{
	return sqrt(xVec*xVec + yVec*yVec);
}


//Getters
float Particle::getxPos(){return xPos;};
float Particle::getyPos(){return yPos;};
float Particle::getxVec(){return xVec;};
float Particle::getyVec(){return yVec;};

//Setters
void Particle::setxVec(float xVec_arg){xVec = xVec_arg;};
void Particle::setyVec(float yVec_arg){yVec = yVec_arg;};
void Particle::setxPos(float xPos_arg){xPos = xPos_arg;};
void Particle::setyPos(float yPos_arg){yPos = yPos_arg;};
