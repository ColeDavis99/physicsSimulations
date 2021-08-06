#ifndef WORLD_H
#define WORLD_H
#include "particle.h"

class World
{

public:
    //Default Constructor
    World();

    //Parameterized Constructor
    World(Particle (*pArr)[100]);

    //Getters

    //Setters

private:
    //Some Var
    //Probably make an array of particles or something. A world has many particles.
};

#endif
