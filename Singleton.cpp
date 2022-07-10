#include <iostream>
#include "Singleton.h"

Singleton* instancia_unica = nullptr;

Singleton* Singleton::getInstance() {
    if (instancia_unica == nullptr) {
        instancia_unica = new Singleton();
    }
    return instancia_unica;
}

Singleton::~Singleton() {
    delete instancia_unica;
}
