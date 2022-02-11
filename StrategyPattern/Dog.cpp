#include "Dog.h"

Dog::Dog()
{
    setSound("Bark");
    flyingType = new CannotFly();
}

Dog::~Dog()
{

}

void Dog::digHole(){
    std::cout << "Dug a hole" <<std::endl;
}