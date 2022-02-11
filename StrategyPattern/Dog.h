/*
 * Dog.h
 * Author: Hao Tian
 *  ref: Derek Banas - STRATEGY DESIGN PATTERN TUTORIAL
 */

#ifndef DOG_H
#define DOG_H

#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();

    void digHole();

    // WARNING: BAD practice - BREAKING the rule for strategy pattern
    // void fly(){
    //     std::cout << "I'm flying" << std::endl;
    // }
};

#endif