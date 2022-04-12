#include "GetTheTiles.h"

void scrabbleTest(){
    // create first singleton
    Singleton* newInstance = Singleton::getInstance();
    std::cout << "newInstance address: " << newInstance << std::endl;

    std::list<std::string> tiles = newInstance->getTiles(9);

    //printList(tiles);
    //std::cout << "I want to play Elden Ring" << std::endl;
    //printList(newInstance->getLetterList());

    // create another singleton (not be able to, just return previous created one)
    Singleton* secondInstance = Singleton::getInstance();
    std::cout << "secondInstance address: " << secondInstance << std::endl;

    std::list<std::string> tiles2 = newInstance->getTiles(2);
    // std::cout << "I want to play Elden Ring" << std::endl;
    // printList(newInstance->getLetterList());
}

void scrabbleMultithreadTest(){
    GetTheTiles g1, g2;

    std::thread getTiles1(g1);
    std::thread getTiles2(g2);

    getTiles1.join();
    getTiles2.join();
}

int main(){
    // scrabbleTest();
    scrabbleMultithreadTest();

    return 0;
}