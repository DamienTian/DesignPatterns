#ifndef SUBJECT_H
#define SUBJECT_H

#pragma once
#include "Observer.h"

// This interface handles adding, deleting and updating observers
class Subject
{
public:
    virtual void registerObserver(Observer* o) = 0;    
    virtual void unregisterObserver(Observer* o) = 0;    
    virtual void notifyObservers() = 0;    
};

#endif