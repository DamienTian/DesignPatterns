#include "UFOEnemyShipBuilding.h"

UFOEnemyShipBuilding::UFOEnemyShipBuilding(){}
UFOEnemyShipBuilding::~UFOEnemyShipBuilding(){}

EnemyShip* UFOEnemyShipBuilding::makeEnemyShip(std::string typeOfShip){
    EnemyShip* theEnemyShip = nullptr;

    if(typeOfShip == "UFO"){
        EnemyShipFactory* shipPartsFactory = new UFOEnemyShipFactory();
        theEnemyShip = new UFOEnemyShip(shipPartsFactory);
        theEnemyShip->setName("UFO Grunt Ship");
    }
    else if(typeOfShip == "UFO BOSS"){
        EnemyShipFactory* shipPartsFactory = new UFOBossEnemyShipFactory();
        theEnemyShip = new UFOBossEnemyShip(shipPartsFactory);
        theEnemyShip->setName("UFO Boss Ship");
    }

    return theEnemyShip;
}