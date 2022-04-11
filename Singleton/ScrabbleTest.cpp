#include "Singleton.h"

template<class T>
void printList(std::list<T> list){
    std::cout << '[';
    for(auto t : list)
        std::cout << t << ',';
    std::cout << ']' << std::endl;
}

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

int main(){
    scrabbleTest();

    return 0;
}