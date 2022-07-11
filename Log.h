#ifndef LOG_H
#define LOG_H

#include "PermissaoAcesso.h"
#include "Data.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Log {
    private:
    Usuario* usuario_do_acesso;
    Data momento_do_acesso;

    public:
    virtual void set_lista_logs(Log*) = 0;
    void set_usuario(Usuario*);
    Usuario* get_usuario();
    void set_data(Data);
    Data get_data();

};

#endif