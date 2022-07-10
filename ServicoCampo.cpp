#include "ServicoCampo.h"

ServicoCampo::ServicoCampo(){}

ServicoCampo::ServicoCampo(UnidadeConsumidora* _uc, Data _data, int _sequencia){
    this->uc = _uc;
    this->data = _data;
    this->sequencia = _sequencia;
}

void ServicoCampo::setUnidadeConsumidora(UnidadeConsumidora* _uc){
    this->uc = _uc;
}

UnidadeConsumidora* ServicoCampo::getUnidadeConsumidora(){
    return this->uc;
}

void ServicoCampo::setData(Data _data){
    this->data = _data;
}

Data ServicoCampo::getData(){
    return this->data;
}

void ServicoCampo::setDataExecucao(Data _data){
    this->data_execucao = _data;
}

Data ServicoCampo::getDataExecucao(){
    return this->data_execucao;
}

void ServicoCampo::setSequencia(int _sequencia){
    this->sequencia = _sequencia;
}

int ServicoCampo::getSequencia(){
    return this->sequencia;
}