#ifndef PARTICLE_H
#define PARTICLE_H

class Particle{

public:
	//Default Constructor
	Particle();

	//Return Velocity of particle
	float Velocity();

	//Getters
	float getxPos();
	float getyPos();
	float getxVec();
	float getyVec();

	//Setters
	void setxVec(float xVec);
	void setyVec(float yVec);
	void setxPos(float xPos);
	void setyPos(float yPos);


private:
	float xVec;
	float yVec;
	float xPos;
	float yPos;

};



#endif
