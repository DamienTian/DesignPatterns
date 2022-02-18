#include "StockObserver.h"

// note: init static member in .cpp to prevent error "ISO C++ forbids in-class initialization of non-const static member..."
int StockObserver::observerIDCounter = 0;

StockObserver::StockObserver(Subject *stockGrabber)
{
    this->stockGrabber = stockGrabber;
    this->observerID = ++observerIDCounter;
    std::cout << "New Observer " + this->observerID << std::endl;
    stockGrabber->registerObserver(this);
}

StockObserver::~StockObserver()
{
}

void StockObserver::update(double ibmPrice, double aaplPrice, double googPrice)
{
    this->ibmPrice = ibmPrice;
    this->aaplPrice = aaplPrice;
    this->googPrice = googPrice;
    printStockPrices();
}

void StockObserver::printStockPrices()
{
    std::cout << "ObserverID " << observerID << std::endl;
    std::cout << "\tIBM: " << ibmPrice << std::endl;
    std::cout << "\tApple: " << aaplPrice << std::endl;
    std::cout << "\tGoogle: " << googPrice << std::endl;
}