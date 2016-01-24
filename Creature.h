#ifndef CREATURE_H
#define CREATURE_H

include<iostream>

class Creature {
    public:
        Creature();
        ~Creature();
        void Eat() = 0;
        void Sleep() = 0;
        void Reproduce() = 0;

    private:
        double health;
}