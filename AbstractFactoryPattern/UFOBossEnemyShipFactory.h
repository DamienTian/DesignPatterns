#ifndef UFOBOSSENEMYSHIPFACTORY_H
#define UFOBOSSENEMYSHIPFACTORY_H

#pragma once

#include "EnemyShipFactory.h"
#include "ESUFOBossGun.h"
#include "ESUFOBossEngine.h"

class UFOBossEnemyShipFactory : public EnemyShipFactory
{
public:
    UFOBossEnemyShipFactory();
    ~UFOBossEnemyShipFactory();

    ESWeapon* addESGun();
    ESEngine* addESEngine();
};

#endif