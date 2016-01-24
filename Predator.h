#ifndef PREDATOR_H
#define PREDATOR_H

#include "Creature.h"

class Predator : Creature
{
    public:
        Predator();
        ~Predator();
        void Eat();
        void Hunt();
        void Sleep();
        void Reproduce();
}