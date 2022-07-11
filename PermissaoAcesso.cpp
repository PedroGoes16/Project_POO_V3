#include "PermissaoAcesso.h"
#include <iostream>

using namespace std;

PermissaoAcesso::PermissaoAcesso(Usuario* _single){
    this->usuario = _single;
    if(_single->getCategoria() == "Eletricista"){
        this->acesso = "E1";
    } else if (_single->getCategoria() == "Leiturista"){
        this->acesso = "L1";
    } else if (_single->getCategoria() == "Cliente"){
        this->acesso = "C1";
    }
}

string PermissaoAcesso::getAcesso(){
    return this->acesso;
}