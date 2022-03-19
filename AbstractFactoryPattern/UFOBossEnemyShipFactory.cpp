#include "UFOBossEnemyShipFactory.h"

UFOBossEnemyShipFactory::UFOBossEnemyShipFactory(){}
UFOBossEnemyShipFactory::~UFOBossEnemyShipFactory(){}

ESWeapon* UFOBossEnemyShipFactory::addESGun(){
    return new ESUFOBossGun();
}

ESEngine* UFOBossEnemyShipFactory::addESEngine(){
    return new ESUFOBossEngine();
}