#ifndef LOG_ESCRITA_H
#define LOG_ESCRITA_H
#include "Log.h"
#include <string>
#include <vector>

class LogEscrita : public Log {
    
    private:
    string entidade_alterada;
    string atributos_pre_alteracao;
    string atributos_pos_alteracao;

    public:
    LogEscrita(Usuario, Data, string, string, string);
    void set_lista_logs(LogEscrita*);
    void filtrar_por_usuario(Usuario);
    void filtrar_por_data(Data);
    vector<LogEscrita*> get_lista_logs_escrita();
    
};

#endif