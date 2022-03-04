#ifndef ENEMYSHIPFACTORY_H
#define ENEMYSHIPFACTORY_H

#pragma once

#include "BigUFOEnemyShip.h"
#include "RocketEnemyShip.h"

class EnemyShipFactory
{
public:
    EnemyShipFactory();
    ~EnemyShipFactory();

    EnemyShip* makeEnemyShip(char newShipType);
};

#endif