/*
 * Flys.h (interface and implementations)
 * Author: Hao Tian
 *  ref: Derek Banas - STRATEGY DESIGN PATTERN TUTORIAL
 */

#ifndef FLYS_H
#define FLYS_H

#pragma once

#include <string>

// The Flys interface (an abstract class)
class Flys
{
public:
    //virtual ~Flys(){}
    virtual std::string fly() = 0;
};

// Class for animal can fly
class ItFly : public virtual Flys{
public:
    std::string fly() override;
};

// Class for animal cannot fly
class CannotFly: public virtual Flys{
public:
    std::string fly() override;
};

#endif