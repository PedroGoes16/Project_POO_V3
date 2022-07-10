#ifndef MEDICAO_H
#define MEDICAO_H

#include "ServicoCampo.h"
#include "ProcessamentoFatura.h"

class Medicao : public ServicoCampo {

    private:
    float leitura_atual;

    public:
    Medicao();
    void registrarLeitura(float, UnidadeConsumidora*);


};

#endif