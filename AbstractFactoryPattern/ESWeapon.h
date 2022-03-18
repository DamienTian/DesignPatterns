#ifndef ESWEAPON_H
#define ESWEAPON_H

#pragma once

class ESWeapon
{
public:
    virtual ~ESWeapon(){}
    virtual std::string toString() = 0;
};

#endif