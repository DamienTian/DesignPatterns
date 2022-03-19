#include "UFOEnemyShip.h"

UFOEnemyShip::UFOEnemyShip(EnemyShipFactory* shipFactory)
{
    this->shipFactory = shipFactory;
}

UFOEnemyShip::~UFOEnemyShip() {}

void UFOEnemyShip::makeShip(){
    std::cout << "Making enemy ship " << getName() << std::endl;
    setWeapon(shipFactory->addESGun());
    setEigine(shipFactory->addESEngine());
}