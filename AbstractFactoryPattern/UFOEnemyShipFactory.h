#ifndef UFOENEMYSHIPFACTORY_H
#define UFOENEMYSHIPFACTORY_H

#pragma once

#include "EnemyShipFactory.h"
#include "ESUFOGun.h"
#include "ESUFOEngine.h"

class UFOEnemyShipFactory : public EnemyShipFactory
{
public:
    UFOEnemyShipFactory();
    ~UFOEnemyShipFactory();

    ESWeapon* addESGun();
    ESEngine* addESEngine();
};

#endif