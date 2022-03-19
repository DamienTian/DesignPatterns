#ifndef ESUFOBOSSGUN_H
#define ESUFOBOSSGUN_H

#pragma once

#include "ESWeapon.h"

class ESUFOBossGun : public ESWeapon
{
public:
    ESUFOBossGun();
    ~ESUFOBossGun();

    const std::string toString();
};

#endif