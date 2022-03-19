#include "UFOEnemyShipBuilding.h"

int main(){
    // From Derek:
    // EnemyShipBuilding handles orders for new EnemyShips
    // You send it a code using the orderTheShip method &
    // it sends the order to the right factory for creation
    EnemyShipBuilding* MakeUFOs = new UFOEnemyShipBuilding();

    EnemyShip* theGrunt = MakeUFOs->orderTheShip("UFO");
    std::cout << theGrunt->toString() << std::endl;

    EnemyShip* theBoss = MakeUFOs->orderTheShip("UFO BOSS");
    std::cout << theBoss->toString() << std::endl;

    delete theBoss;
    delete theGrunt;

    return 0;
}