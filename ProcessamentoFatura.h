#ifndef PROCESSAMENTOFATURA_H
#define PROCESSAMENTOFATURA_H

#include "Fatura.h"
#include "Cliente.h"
#include "UnidadeConsumidora.h"

class ProcessamentoFatura {

    private:

    public:
    ProcessamentoFatura();
    void cadastrarFatura(Fatura*, UnidadeConsumidora*);
    void pagarFatura(Fatura*);
    Fatura* gerarFatura(float _consumo);
};

#endif