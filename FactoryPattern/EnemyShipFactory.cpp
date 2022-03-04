#include "EnemyShipFactory.h"

EnemyShipFactory::EnemyShipFactory()
{
}

EnemyShipFactory::~EnemyShipFactory()
{
}


EnemyShip* EnemyShipFactory::makeEnemyShip(char newShipType){
    if(newShipType == 'U')
        return new UFOEnemyShip();
    else if(newShipType == 'R')
        return new RocketEnemyShip();
    else if(newShipType == 'B')
        return new BigUFOEnemyShip();
    else
        return nullptr;
}