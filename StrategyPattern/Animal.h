/*
 * Animal.h
 * Author: Hao Tian
 *  ref: Derek Banas - STRATEGY DESIGN PATTERN TUTORIAL
 */

#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once

#include <iostream>
#include <memory>
#include "Flys.h"

class Animal
{
public:
    Animal();
    ~Animal();

    void setName(std::string name) { this->name = name; }
    const std::string getName() { return name; }

    void setFavoriteFood(std::string favoriteFood) { this->favoriteFood = favoriteFood; }
    const std::string getFavoriteFood() { return favoriteFood; }

    void setSound(std::string sound) { this->sound = sound; }
    const std::string getSound() { return sound; }

    void setHeight(double height);
    const int geiHeight() { return height; }

    void setWeight(double weight);
    const double getWeight() { return weight; }

    void setSpeed(double speed); 
    const double getSpeed() { return speed; }

    // WARNING: BAD practice: 
    /*
    void fly(){
        std::cout << "I'm flying" << std::endl;
    }
    */
    /*  
        Instead we use the interface to do this for us. 
        Use Flys Interface to assign animals with different flying ability dynamiclly
        note: the abstract class can only be called as a pointer in C++
    */  
    Flys* flyingType;

    std::string tryToFly();
    void setFlyingAbility(Flys* newFlyType);

private:
    std::string name;
    std::string favoriteFood;
    std::string sound;
    double height;
    double weight;
    double speed;
};

#endif