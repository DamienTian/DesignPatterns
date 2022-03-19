#ifndef ESUFOENGINE_H
#define ESUFOENGINE_H

#pragma once

#include "ESEngine.h"

class ESUFOEngine : public ESEngine
{
public:
    ESUFOEngine();
    ~ESUFOEngine();

    const std::string toString();
};

#endif