#ifndef MEDICAO_H
#define MEDICAO_H

#include "ServicoCampo.h"
#include "ProcessamentoFatura.h"
#include "PermissaoAcesso.h"

#include <string>

using namespace std;

class Medicao : public ServicoCampo {

    private:
    float leitura_atual;
    string categoria_permitida = "Leiturista";
    

    public:
    Medicao(UnidadeConsumidora*, Data, int);
    void registrarLeitura(float, UnidadeConsumidora*, PermissaoAcesso*);
    string getCategoriaPermitida();


};

#endif