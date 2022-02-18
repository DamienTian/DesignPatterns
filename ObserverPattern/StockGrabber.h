#ifndef STOCKGRABBER_H
#define STOCKGRABBER_H
#pragma once

#include <iostream>
#include <vector>
#include "Subject.h"


class StockGrabber : public Subject
{
public:
    StockGrabber();
    ~StockGrabber();

    void registerObserver(Observer* o) override;
    void unregisterObserver(Observer* o) override;
    void notifyObservers() override;

    void setIBMPrice(double newIBMPrice);
	void setAAPLPrice(double newAAPLPrice);
	void setGOOGPrice(double newGOOGPrice);

private:
    std::vector<Observer*> observers;
	double ibmPrice;
	double aaplPrice;
	double googPrice;
};

#endif