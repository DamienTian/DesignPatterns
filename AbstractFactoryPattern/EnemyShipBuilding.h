#ifndef ENEMYSHIPBUILDING_H
#define ENEMYSHIPBUILDING_H

#pragma once

#include <string>

#include "EnemyShip.h"

class EnemyShipBuilding
{
public:
    EnemyShipBuilding();
    ~EnemyShipBuilding();

    EnemyShip* orderTheShip(std::string typeOfShip);

protected:
    virtual EnemyShip* makeEnemyShip(std::string typeOfShip) = 0;    
};

#endif