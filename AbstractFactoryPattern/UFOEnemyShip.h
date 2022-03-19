#ifndef UFOENEMYSHIP_H
#define UFOENEMYSHIP_H

#pragma once

#include "EnemyShip.h"

class UFOEnemyShip : public EnemyShip
{
public:
    UFOEnemyShip(EnemyShipFactory* shipFactory);
    ~UFOEnemyShip();
    void makeShip();

private:
    EnemyShipFactory* shipFactory;    
};

#endif