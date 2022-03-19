#ifndef ESENGINE_H
#define ESENGINE_H

#pragma once

#include <string>

class ESEngine
{
public:
    virtual ~ESEngine(){}
    const virtual std::string toString() = 0;
};

#endif