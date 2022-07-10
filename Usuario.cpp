#include "Usuario.h"

using namespace std;
Usuario::Usuario(){};

Usuario::Usuario(int _id, int _senha){
    this->id = _id;
    this->senha = _senha;
}

int Usuario::getSenha(){
    return this->senha;
}

void Usuario::setSenha(int _senha){
    this->senha = _senha;
}

int Usuario::getId(){
    return this->id;
}