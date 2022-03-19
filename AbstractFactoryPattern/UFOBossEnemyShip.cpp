#include "UFOBossEnemyShip.h"

UFOBossEnemyShip::UFOBossEnemyShip(EnemyShipFactory* shipFactory)
{
    this->shipFactory = shipFactory;
}

UFOBossEnemyShip::~UFOBossEnemyShip() {}

void UFOBossEnemyShip::makeShip(){
    std::cout << "Making boss enemy ship " << getName() << std::endl;
    setWeapon(shipFactory->addESGun());
    setEigine(shipFactory->addESEngine());
}