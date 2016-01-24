#ifndef PREY_H
#define PREY_H

class Prey : Creature
{
    public:
        Prey();
        ~Prey();
        void Eat();
        void Sleep();
        void Reproduce();
}