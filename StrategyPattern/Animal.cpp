#include "Animal.h"

Animal::Animal()
{
}

Animal::~Animal()
{
    if(flyingType){
        delete flyingType;
    }
}

void Animal::setHeight(double height)
{
    if (height > 0)
    {
        this->height = height;
    }
    else
    {
        std::cerr << "The height must be greater than 0." << std::endl;
    }
}

void Animal::setWeight(double weight)
{
    if (weight > 0)
    {
        this->weight = weight;
    }
    else
    {
        std::cerr << "The weight must be greater than 0." << std::endl;
    }
}

void Animal::setSpeed(double speed)
{
    if (speed > 0.)
    {
        this->speed = speed;
    }
    else
    {
        std::cerr << "The speed must be greater than 0." << std::endl;
    }
}

std::string Animal::tryToFly(){
    return flyingType->fly();
}

void Animal::setFlyingAbility(Flys* newFlyType){
    flyingType = newFlyType;
}