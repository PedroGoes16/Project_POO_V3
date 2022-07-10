#ifndef SINGLETON_H
#define SINGLETON_H

#include "Usuario.h"

class Singleton {
    private: 
    static Usuario* instancia_unica;
    ~Singleton();
    Singleton();

    public:
    static Usuario* getInstance(Usuario*);
    
};

#endif