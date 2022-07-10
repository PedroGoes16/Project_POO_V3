#include "Endereco.h"

Endereco::Endereco(){}

Endereco::Endereco(string _logradouro, int _numero, string _bairro, string _complemento, long int _cep, string _cidade, string _estado){
    this->logradouro = _logradouro;
    this->numero = _numero;
    this->bairro = _bairro;
    this->complemento = _complemento;
    this->cep = _cep;
    this->cidade = _cidade;
    this->estado = _estado;
}

void Endereco::setLogradouro(string _logradouro){
    this->logradouro = _logradouro;
}

string Endereco::getLogradouro(){
    return this->logradouro;
}

void Endereco::setNumero(int _numero){
    this->numero = _numero;
}

int Endereco::getNumero(){
    return this->numero;
}

void Endereco::setBairro(string _bairro){
    this->bairro = _bairro;
}

string Endereco::getBairro(){
    return this->bairro;
}

void Endereco::setComplemento(string _complemento){
    this->complemento = _complemento;
}

string Endereco::getComplemento(){
    return this->complemento;
}

void Endereco::setCep(long int _cep){
    this->cep = _cep;
}

long int Endereco::getCep(){
    return this->cep;
}

void Endereco::setCidade(string _cidade){
    this->cidade = _cidade;
}

string Endereco::getCidade(){
    return this->cidade;
}

void Endereco::setEstado(string _estado){
    this->estado = _estado;
}

string Endereco::getEstado(){
    return this->estado;
}