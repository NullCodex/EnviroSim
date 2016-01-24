#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H
#include <vector>


/*
    Environment should be responsible for creating and destroying all creatures and other objects
*/

class Environment
{
    public:
        Environment();
        ~Environment();
        void Simulation();
        void GenerateWeather(); // might not do until later
}