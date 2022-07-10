#ifndef SINGLETON_H
#define SINGLETON_H

#include "Usuario.h"

class Singleton {
    private: 
    static Singleton* instancia_unica;
    Singleton();
    ~Singleton();

    public:
    static Singleton* getInstance();
};

#endif