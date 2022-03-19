#ifndef ENEMYSHIPFACTORY_H
#define ENEMYSHIPFACTORY_H

#pragma once

#include "ESWeapon.h"
#include "ESEngine.h"

// Wrote by Derek:
// With an Abstract Factory Pattern you won't
// just build ships, but also all of the components
// for the ships

// Here is where you define the parts that are required
// if an object wants to be an enemy ship
// note: this is a interface
class EnemyShipFactory
{
public:
    virtual ~EnemyShipFactory(){};

    virtual ESWeapon* addESGun() = 0;
    virtual ESEngine* addESEngine() = 0;
};

#endif