#ifndef ESUFOGUN_H
#define ESUFOGUN_H

#pragma once

#include "ESWeapon.h"

class ESUFOGun : public ESWeapon
{
public:
    ESUFOGun();
    ~ESUFOGun();

    const std::string toString();
};

#endif