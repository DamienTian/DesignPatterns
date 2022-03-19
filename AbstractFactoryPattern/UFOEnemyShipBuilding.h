#ifndef UFOENEMYSHIPBUILDING_H
#define UFOENEMYSHIPBUILDING_H

#pragma once

#include "EnemyShipBuilding.h"
#include "UFOEnemyShipFactory.h"
#include "UFOBossEnemyShipFactory.h"
#include "UFOEnemyShip.h"
#include "UFOBossEnemyShip.h"

// From Derek:
// This is the only class that needs to change, if you
// want to determine which enemy ships you want to
// provide as an option to build

class UFOEnemyShipBuilding : public EnemyShipBuilding
{
public:
    UFOEnemyShipBuilding();
    ~UFOEnemyShipBuilding();

protected:
    EnemyShip* makeEnemyShip(std::string typeOfShip) override;
};

#endif