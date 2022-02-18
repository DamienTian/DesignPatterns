#ifndef OBSERVER_H
#define OBSERVER_H

#pragma once

class Observer
{
public:
    // The Observers update method is called when the Subject changes
    virtual void update(double ibmPrice, double aaplPrice, double googPrice) = 0;
};

#endif