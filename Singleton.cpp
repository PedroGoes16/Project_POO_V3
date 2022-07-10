#include <iostream>
#include "Singleton.h"

Usuario* Singleton::instancia_unica = 0;

Singleton::Singleton(){}

Usuario* Singleton::getInstance(Usuario* _usuario_logado) {
    if (instancia_unica == 0) {
        instancia_unica = _usuario_logado;
    }
    return instancia_unica;
}

Singleton::~Singleton() {
    delete instancia_unica;
}
