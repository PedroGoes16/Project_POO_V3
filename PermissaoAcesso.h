#ifndef PERMISSAOACESSO_H
#define PERMISSAOACESSO_H

#include <string>
using namespace std;


#include "ProcessamentoFatura.h"

class PermissaoAcesso {

    private:
    ProcessamentoFatura acesso_cliente;

    public: 
    PermissaoAcesso(string);

};

#endif