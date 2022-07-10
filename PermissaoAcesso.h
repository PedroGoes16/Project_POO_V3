#ifndef PERMISSAOACESSO_H
#define PERMISSAOACESSO_H

#include "Singleton.h"

#include <string>
using namespace std;

class PermissaoAcesso {

    private:
    string acesso;
    
    public:
    PermissaoAcesso(Usuario*);
    string getAcesso();

};

#endif