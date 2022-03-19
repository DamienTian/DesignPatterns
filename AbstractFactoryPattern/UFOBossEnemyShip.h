#ifndef UFOBOSSENEMYSHIP_H
#define UFOBOSSENEMYSHIP_H

#pragma once

#include "EnemyShip.h"

class UFOBossEnemyShip : public EnemyShip
{
public:
    UFOBossEnemyShip(EnemyShipFactory* shipFactory);
    ~UFOBossEnemyShip();
    void makeShip();

private:
    EnemyShipFactory* shipFactory;    
};

#endif