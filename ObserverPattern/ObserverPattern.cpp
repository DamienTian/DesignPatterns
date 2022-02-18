#include "StockObserver.h"

int main(){

    StockGrabber* stockGrabber = new StockGrabber();

    StockObserver* observer1 = new StockObserver(stockGrabber);

    stockGrabber->setIBMPrice(197.00);
    stockGrabber->setAAPLPrice(677.60);
    stockGrabber->setGOOGPrice(676.40);

    StockObserver* observer2 = new StockObserver(stockGrabber);

    stockGrabber->setIBMPrice(197.00);
    stockGrabber->setAAPLPrice(677.60);
    stockGrabber->setGOOGPrice(676.40); 

    delete stockGrabber;

    return 0;
}