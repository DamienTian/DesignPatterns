#include "EnemyShip.h"

EnemyShip::EnemyShip(){}
EnemyShip::~EnemyShip(){
    if(weapon)
        delete weapon;
    if(engine)
        delete engine;
}

void EnemyShip::followHeroShip()
{
    ESEngine* e = getEngine();
    std::cout << getName() << " is following the hero by " << e->toString() << std::endl;
}

void EnemyShip::displayEnemyShip()
{
    std::cout << getName() << " is on the screen" << std::endl;
}

void EnemyShip::enemyShipShoots()
{
    ESWeapon* w = getWeapon();
    std::cout << getName() << " attacks and does damage to hero by " << w->toString() << std::endl;
}