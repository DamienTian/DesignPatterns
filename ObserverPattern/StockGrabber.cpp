#include "StockGrabber.h"

StockGrabber::StockGrabber()
{
}

StockGrabber::~StockGrabber()
{
    // TODO: might need to delete all element in observers
    for (Observer *o : observers)
    {
        delete o;
    }
}

void StockGrabber::registerObserver(Observer *o)
{
    std::cout << "Adding an observer ..." << std::endl;
    observers.push_back(o);
}

void StockGrabber::unregisterObserver(Observer *o)
{
    for (int i = 0; i < observers.size(); ++i)
    {
        if (observers[i] == o)
        {
            std::cout << "Deleting an observer ..." << std::endl;
            observers.erase(observers.begin() + i);
            return;
        }
    }
    std::cerr << "Falied to delete the observer: Observer does not exist" << std::endl;
}

void StockGrabber::notifyObservers()
{
    for (Observer *o : observers)
    {
        o->update(ibmPrice, aaplPrice, googPrice);
    }
}

void StockGrabber::setIBMPrice(double newIBMPrice)
{
    ibmPrice = newIBMPrice;
    notifyObservers();
}

void StockGrabber::setAAPLPrice(double newAAPLPrice)
{
    aaplPrice = newAAPLPrice;
    notifyObservers();
}

void StockGrabber::setGOOGPrice(double newGOOGPrice)
{
    googPrice = newGOOGPrice;
    notifyObservers();
}
