#include "UFOEnemyShipFactory.h"

UFOEnemyShipFactory::UFOEnemyShipFactory(){}
UFOEnemyShipFactory::~UFOEnemyShipFactory(){}

ESWeapon* UFOEnemyShipFactory::addESGun(){
    return new ESUFOGun();
}

ESEngine* UFOEnemyShipFactory::addESEngine(){
    return new ESUFOEngine();
}