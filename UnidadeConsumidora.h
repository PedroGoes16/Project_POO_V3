#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include <string>
#include <vector>
#include "Endereco.h"
#include "Fatura.h"

using namespace std;

class UnidadeConsumidora {

    private:
    vector<string> tipos = {"Residencial", "Comercial", "Industrial", "Iluminacao Publica"};
    string id;
    string tipo;
    float ultima_leitura = 0;
    Endereco endereco;
    vector<Fatura*> faturas;

    public:
    UnidadeConsumidora();
    UnidadeConsumidora(string, int, Endereco);
    void setId(string);
    string getId();
    void setTipo(string);
    string getTipo();
    void setUltimaLeitura(float);
    float getUltimaLeitura();
    void setEndereco(Endereco);
    Endereco getEndereco();
    void addFatura(Fatura*);
    void removeFatura(Fatura*);
    vector<Fatura*> getFaturas();

};

#endif