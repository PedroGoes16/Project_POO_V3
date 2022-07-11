#ifndef LOG_ACESSO_NEGADO_H
#define LOG_ACESSO_NEGADO_H
#include "LogLeitura.h"
#include <string>
#include <vector>

class LogAcessoNegado : public LogLeitura {
    
    private:

    public:
    LogAcessoNegado(Usuario, Data, string, string);
    void set_lista_logs(LogAcessoNegado*);
    void filtrar_por_usuario(vector<LogAcessoNegado>, Usuario);
    void filtrar_por_data(vector<LogAcessoNegado>, Data);
    vector<LogAcessoNegado*> get_lista_logs_acesso_negado();
};


#endif