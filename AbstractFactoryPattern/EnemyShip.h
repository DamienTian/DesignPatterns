#ifndef ENEMYSHIP_H
#define ENEMYSHIP_H

#pragma once

#include <iostream>
#include <string>

#include "ESWeapon.h"
#include "ESEngine.h"
#include "EnemyShipFactory.h"

class EnemyShip
{
public:
    EnemyShip();
    ~EnemyShip();

    std::string getName() const { return name; }
    void setName(std::string newName) { name = newName; }

    double getSpeed() const { return speed; }
    void setSpeed(double newSpeed) { speed = newSpeed; }

    double getDamage() const { return damageAmount; }
    void setDamage(double newDamageAmount) { damageAmount = newDamageAmount; }

    ESWeapon* getWeapon() const { return weapon; }
    void setWeapon(ESWeapon* newWeapon) { weapon = newWeapon; }

    ESEngine* getEngine() const { return engine; }
    void setEigine(ESEngine* newEngine) { engine = newEngine; }

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