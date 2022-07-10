#ifndef FATURA_H
#define FATURA_H

#include "Data.h"

class Fatura{

    private:
    float taxa_juros = 0.01;
    float valor_kwh = 1.1;
    float consumo;
    float valor;
    Data vencimento;
    bool status_pagamento = false;

    public:
    Fatura();
    Fatura(float, Data);
    void setConsumo(float);
    float getConsumo();
    void setValor(float);
    float getValorOriginal();
    float getValorFinal();
    void setVencimento(Data);
    Data getVencimento();
    void setStatusPagamento(bool);
    bool getStatusPagamento();
    void setTaxaJuros(float);
    float getTaxaJuros();
    float calcularJuros();

};

#endif