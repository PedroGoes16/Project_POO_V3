#include "Usuario.h"

using namespace std;
Usuario::Usuario(){};

Usuario::Usuario(string _categoria, string _senha){
    this->categoria = _categoria;
    this->senha = _senha;
}

string Usuario::getSenha(){
    return this->senha;
}

void Usuario::setSenha(string _senha){
    this->senha = _senha;
}

int Usuario::getId(){
    return this->id;
}

void Usuario::setId(int _id){
    this->id = _id;
}

string Usuario::getCategoria(){
    return this->categoria;
}

void Usuario::setCategoria(string _categoria){
    this->categoria = _categoria;
}