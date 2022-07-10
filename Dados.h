#ifndef DADOS_H
#define DADOs_H

#include <vector>
#include "Cliente.h"
#include "UnidadeConsumidora.h"
#include "Fatura.h"

class Dados {

    private:
    vector<Cliente*> clientes_cadastrados;
    vector<UnidadeConsumidora*> unidades_cadastradas;
    vector<Fatura*> faturas_cadastradas;

    public:
    Dados();
    ~Dados();

    //Métodos gets
    vector<Cliente*> getClientesCadastrados();
    vector<UnidadeConsumidora*> getUnidadesCadastradas();
    vector<Fatura*> getFaturasCadastradas();

    //Métodos cadastros
    void cadastrarCliente(Cliente*);
    void cadastrarUnidade(UnidadeConsumidora*);
    void cadastrarFatura(Fatura*);

    //Métodos remove
    void removerCliente(Cliente*);
    void removerUnidade(UnidadeConsumidora*);
    void removerFatura(Fatura*);

};

#endif