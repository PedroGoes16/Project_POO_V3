#include "Fatura.h"

#include <iostream>
using namespace std;

Fatura::Fatura(){}

Fatura::Fatura(float _consumo, Data _vencimento){
    this->consumo = _consumo;
    this->valor = ((this->consumo)*(this->valor_kwh));
    this->vencimento = _vencimento;
}

void Fatura::setConsumo(float _consumo){
    this->consumo = _consumo;
}

float Fatura::getConsumo(){
    return this->consumo;
}

void Fatura::setValor(float _valor){
    this->valor = _valor;
}

float Fatura::getValorFinal(){
    return this->getValorOriginal() + this->calcularJuros();
}

void Fatura::setVencimento(Data _vencimento){
    this->vencimento = _vencimento;
}

Data Fatura::getVencimento(){
    return this->vencimento;
}

void Fatura::setStatusPagamento(bool _status_pagamento){
    this->status_pagamento = _status_pagamento;
}

bool Fatura::getStatusPagamento(){
    return this->status_pagamento;
}

void Fatura::setTaxaJuros(float _taxa_juros){
    this->taxa_juros = _taxa_juros;
}

float Fatura::getTaxaJuros(){
    return this->taxa_juros;
}

float Fatura::getValorOriginal(){
    return this->valor;
}

float Fatura::calcularJuros(){
    float montante = this->getValorOriginal();
    if(this->getStatusPagamento() || this->getVencimento().diffData(this->getVencimento().dateNow()) > 0){
        return 0;
    } else {
        int atraso = (-1)*(this->getVencimento().diffData(this->getVencimento().dateNow()));
        while(atraso > 0){
            montante += montante*this->getTaxaJuros();
            atraso -= 30;
        }
        return (montante - this->getValorOriginal());
    }
}
