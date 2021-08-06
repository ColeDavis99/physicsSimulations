#include "particle.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;


//Default Constructor
Particle::Particle(){}

//Paramaterized Constructor
Particle::Particle(float xP, float yP, float xV, float yV, float xA, float yA)
{
	xPos = xP;
	yPos = yP;
	xVec = xV;
	yVec = yV;
	xAcc = xA;
	yAcc = yA;
}

//Return Velocity
float Particle::getVelocity()
{
	return sqrt(xVec*xVec + yVec*yVec);
}

//Getters
float Particle::getxPos(){return xPos;};
float Particle::getyPos(){return yPos;};
float Particle::getxVec(){return xVec;};
float Particle::getyVec(){return yVec;};
float Particle::getxAcc(){return xAcc;};
float Particle::getyAcc(){return yAcc;};

//Setters
void Particle::setxVec(float xVec_arg){xVec = xVec_arg;};
void Particle::setyVec(float yVec_arg){yVec = yVec_arg;};
void Particle::setxPos(float xPos_arg){xPos = xPos_arg;};
void Particle::setyPos(float yPos_arg){yPos = yPos_arg;};
void Particle::setxAcc(float xAcc_arg){xPos = xAcc_arg;};
void Particle::setyAcc(float yAcc_arg){yPos = yAcc_arg;};
