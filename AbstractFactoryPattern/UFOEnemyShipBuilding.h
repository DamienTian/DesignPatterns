#ifndef UFOENEMYSHIPBUILDING_H
#define UFOENEMYSHIPBUILDING_H

#pragma once

#include "EnemyShipBuilding.h"

class UFOEnemyShipBuilding : public EnemyShipBuilding
{
public:
    UFOEnemyShipBuilding();
    ~UFOEnemyShipBuilding();

protected:
    EnemyShip* makeEnemyShip(std::string typeOfShip) override;
};

#endif