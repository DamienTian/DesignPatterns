#ifndef ESWEAPON_H
#define ESWEAPON_H

#pragma once

#include <string>

class ESWeapon
{
public:
    virtual ~ESWeapon(){}
    const virtual std::string toString() = 0;
};

#endif