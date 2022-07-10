#include "UnidadeConsumidora.h"

#include "UnidadeConsumidora.h"

UnidadeConsumidora::UnidadeConsumidora(){}

UnidadeConsumidora::UnidadeConsumidora(string _id, int _tipo, Endereco _endereco){
    this->id = _id;
    this->tipo = this->tipos[_tipo];
    this->endereco = _endereco;
}

void UnidadeConsumidora::setId(string _id){
    this->id = _id;
}

std::string UnidadeConsumidora::getId(){
    return this->id;
}

void UnidadeConsumidora::setTipo(string _tipo){
    this->tipo = _tipo;
}

std::string UnidadeConsumidora::getTipo(){
    return this->tipo;
}

void UnidadeConsumidora::setEndereco(Endereco _endereco){
    this->endereco = _endereco;
}

Endereco UnidadeConsumidora::getEndereco(){
    return this->endereco;
}

void UnidadeConsumidora::setUltimaLeitura(float _leitura){
    this->ultima_leitura = _leitura;
}

float UnidadeConsumidora::getUltimaLeitura(){
    return this->ultima_leitura;
}

void UnidadeConsumidora::addFatura(Fatura* _fatura){
    this->faturas.push_back(_fatura);
}

void UnidadeConsumidora::removeFatura(Fatura* _fatura){
    vector<Fatura*>::iterator fatura_removida = this->faturas.begin();
    for(Fatura* fatura : this->faturas){
        if(fatura == _fatura){
            this->faturas.erase(fatura_removida);
        }
        fatura_removida++;
    }
}

std::vector<Fatura*> UnidadeConsumidora::getFaturas(){
    return this->faturas;
}