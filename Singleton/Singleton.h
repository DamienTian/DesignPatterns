#ifndef SINGLETON_H
#define SINGLETON_H

#pragma once

#include <iostream>
#include <string>
#include <list>
#include <memory>
#include <chrono>
#include <thread>

// ref - how to build singleton in C++ : https://refactoringguru.cn/design-patterns/singleton/cpp/example
class Singleton
{
public:
    ~Singleton();

    // Singletons should not be cloneable or assignable.
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    // Return the only instance
    static Singleton *getInstance();

    std::list<std::string> getLetterList() { return instance->lettersList; }
    std::list<std::string> getTiles(int numOfTiles);

    // Used to slow down 1st thread
    static bool firstThread;

protected:
    // note: put static singleton ptr in protected
    Singleton();
    static Singleton *instance;

private:
    std::list<std::string> lettersList = {"a", "a", "a", "a", "a", "a", "a", "a", "a",
                                          "b", "b", "c", "c", "d", "d", "d", "d", "e", "e", "e", "e", "e",
                                          "e", "e", "e", "e", "e", "e", "e", "f", "f", "g", "g", "g", "h",
                                          "h", "i", "i", "i", "i", "i", "i", "i", "i", "i", "j", "k", "l",
                                          "l", "l", "l", "m", "m", "n", "n", "n", "n", "n", "n", "o", "o",
                                          "o", "o", "o", "o", "o", "o", "p", "p", "q", "r", "r", "r", "r",
                                          "r", "r", "s", "s", "s", "s", "t", "t", "t", "t", "t", "t", "u",
                                          "u", "u", "u", "v", "v", "w", "w", "x", "y", "y", "z"};
};

#endif