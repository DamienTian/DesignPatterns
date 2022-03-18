#ifndef ENEMYSHIP_H
#define ENEMYSHIP_H

#pragma once

#include <iostream>
#include <string>

#include "ESWeapon.h"
#include "ESEngine.h"

class EnemyShip
{
public:
    EnemyShip();
    virtual ~EnemyShip();

    const std::string getName() { return name; }
    void setName(std::string newName) { name = newName; }

    const double getSpeed() { return speed; }
    void setSpeed(double newSpeed) { speed = newSpeed; }

    const double getDamage() { return damageAmount; }
    void setDamage(double newDamageAmount) { damageAmount = newDamageAmount; }

    void followHeroShip();
    void displayEnemyShip();
    void enemyShipShoots();

    virtual void makeShip() = 0;

    std::string toString()
    {
        std::string infoOnShip = "The " + name + " has a top speed of " + engine->toString() + " and an attack power of " + weapon->toString();
        return infoOnShip;
    }

private:
    std::string name;
    double speed;
    double directionX;
    double directionY;
    double damageAmount;
    ESWeapon* weapon;
    ESEngine* engine;
};

#endif