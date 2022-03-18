#include "EnemyShipBuilding.h"

EnemyShipBuilding::EnemyShipBuilding(){}
EnemyShipBuilding::~EnemyShipBuilding(){}

EnemyShip* EnemyShipBuilding::orderTheShip(std::string typeOfShip){
    EnemyShip* theEnemyShip = makeEnemyShip(typeOfShip);

    theEnemyShip->makeShip();
    theEnemyShip->displayEnemyShip();
    theEnemyShip->followHeroShip();
    theEnemyShip->enemyShipShoots();

    return theEnemyShip;
}