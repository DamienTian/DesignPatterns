#include "Singleton.h"

Singleton *Singleton::instance = nullptr;
bool Singleton::firstThread = true;

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
    if (instance)
        delete instance;
}

Singleton *Singleton::getInstance()
{
    if (instance == nullptr)
    {
        if (firstThread)
        {
            firstThread = false;
            // Cause current thread to sleep for 1 second
            try
            {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            catch (...)
            {
                std::cerr << "Caught Error: Something went wrong with Singleton multithreading" << std::endl;
            }
        }
        instance = new Singleton();
    }
    return instance;
}

std::list<std::string> Singleton::getTiles(int numOfTiles){
    std::list<std::string> tilesToSend;
    for(int i = 0; i < numOfTiles; ++i){
        tilesToSend.insert(tilesToSend.end(), instance->lettersList.front());
        instance->lettersList.pop_front();
    }
    return tilesToSend; 
}