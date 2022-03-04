#ifndef ENEMYSHIP_H
#define ENEMYSHIP_H

#pragma once

#include <iostream>
#include <string>

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

private:
    std::string name;
    double speed;
    double directionX;
    double directionY;
    double damageAmount;
};

#endif