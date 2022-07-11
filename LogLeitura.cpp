#include "LogLeitura.h"

LogLeitura::LogLeitura(){};

LogLeitura::LogLeitura(Usuario* _usuario, Data _data, string _objeto, string _metodo){
    this->set_usuario(_usuario);
    this->set_data(_data);
    this->entidade_acessada = _objeto;
    this->informacao_acessada = _metodo;
    this->logs_leituras_registradas.push_back(this);    
}

vector<LogLeitura*> LogLeitura::filtrar_por_usuario(Usuario* _usuario){
    vector<LogLeitura*> aux;
    for(LogLeitura* log_leitura : this->logs_leituras_registradas){
        if(log_leitura->get_usuario() == _usuario){
            aux.push_back(log_leitura);
        }
    }
    return aux;
}

vector<LogLeitura*> LogLeitura::filtrar_por_data(Data _data){
    vector<LogLeitura*> aux;
    for(LogLeitura* log_leitura : this->logs_leituras_registradas){
        if(log_leitura->get_data().diffData(_data) == 0){
            aux.push_back(log_leitura);
        }
    }
    return aux;
}