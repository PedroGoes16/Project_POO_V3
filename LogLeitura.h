#ifndef LOG_LEITURA_H
#define LOG_LEITURA_H
#include "Log.h"
#include <string>
#include <vector>

class LogLeitura : public Log {

    private:
    string entidade_acessada;
    string informacao_acessada;
    static vector<LogLeitura*> logs_leituras_registradas;

    public:
    LogLeitura();
    LogLeitura(Usuario*, Data, string, string);
    vector<LogLeitura*> filtrar_por_usuario(Usuario*);
    vector<LogLeitura*> filtrar_por_data(Data);
};

#endif