#include "Dog.h"
#include "Bird.h"

int main()
{
    std::unique_ptr<Animal> sparky(new Dog());
    std::unique_ptr<Animal> tweety(new Bird());

    std::cout << "Dog: " + sparky->tryToFly() << std::endl;
    std::cout << "Bird: " + tweety->tryToFly() << std::endl;

    sparky->setFlyingAbility(new ItFly());
    std::cout << "Dog: " + sparky->tryToFly() << std::endl;
}