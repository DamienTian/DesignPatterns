/*
 *  *** Factory Pattern ***
 * When a method returns one of several possible classes that share a common super class, use this pattern. You use the
 * Factory design pattern when you want to define the class of an object at runtime. It also allows you to encapsulate
 * object creation so that you can keep all object creation code in one place.
 * Think as a factory creates mant objects which all share a same base object (think about a meat factory which produces pork, beef, lamb ...)
 */

#include "EnemyShipFactory.h"

int main()
{
    EnemyShipFactory *shipFactory = new EnemyShipFactory();

    EnemyShip *enemy = nullptr;

    char input;
    std::cout << "What type of ship? (U / R / B)" << std::endl;
    std::cin >> input;

    if(input == 'U' || input == 'R' || input == 'B'){
        enemy = shipFactory->makeEnemyShip(input);
        if(enemy){
            enemy->followHeroShip();
            enemy->displayEnemyShip();
            enemy->enemyShipShoots();
        }
    }
    else{
        std::cerr << "Invalid input" << std::endl;
    }

    return 0;
}