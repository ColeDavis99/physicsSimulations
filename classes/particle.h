#ifndef PARTICLE_H
#define PARTICLE_H

class Particle{

public:
	//Default Constructor
	Particle();

	//Parameterized Constructor
	Particle(float x, float y, float xVec, float yVec, float xAcc, float yAcc);

	//Getters
	float getxPos();
	float getyPos();
	float getxVec();
	float getyVec();
	float getxAcc();
	float getyAcc();
	float getVelocity();

	//Setters
	void setxVec(float xVec);
	void setyVec(float yVec);
	void setxPos(float xPos);
	void setyPos(float yPos);
	void setxAcc(float xAcc);
	void setyAcc(float yAcc);

private:
	float xVec;
	float yVec;
	float xPos;
	float yPos;
	float xAcc;
	float yAcc;
};



#endif
