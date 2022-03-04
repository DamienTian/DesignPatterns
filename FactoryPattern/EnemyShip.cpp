#include "EnemyShip.h"

EnemyShip::EnemyShip(){}
EnemyShip::~EnemyShip(){}

void EnemyShip::followHeroShip()
{
    std::cout << getName() << " is following the hero" << std::endl;
}

void EnemyShip::displayEnemyShip()
{
    std::cout << getName() << " is on the screen" << std::endl;
}

void EnemyShip::enemyShipShoots()
{
    std::cout << getName() << " attacks and does " << getDamage() << " damage to hero" << std::endl;
}