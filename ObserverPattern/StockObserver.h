#ifndef STOCKOBSERVER_H
#define STOCKOBSERVER_H

#pragma once

#include "StockGrabber.h"

class StockObserver : public Observer
{
public:
    StockObserver(Subject* stockGrabber);
    ~StockObserver();
    void update(double ibmPrice, double aaplPrice, double googPrice) override;
    void printStockPrices();
    
private:
    double ibmPrice;
	double aaplPrice;
	double googPrice;

    static int observerIDCounter;
    int observerID;
    // note: hold a ref to the StockGrabber object
    Subject* stockGrabber;
};

#endif