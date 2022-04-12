#ifndef GETTHETILES_H
#define GETTHETILES_H

#pragma once

#include "Singleton.h"

class GetTheTiles
{
public:
    void operator() (){
        Singleton* newInstance = Singleton::getInstance();
        std::cout << "newInstance address: " << newInstance << std::endl;
        std::cout << "newInstance letter list: ";
        printList(newInstance->getLetterList());
        std::list<std::string> tiles = newInstance->getTiles(9);
        std::cout << "tiles list: ";
        printList(tiles);
    }
};

#endif