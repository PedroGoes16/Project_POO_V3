#ifndef INADIMPLENTES_H
#define INADIMPLENTES_H

#include "Cliente.h"
#include "Fatura.h"

class Inadimplentes {

    private:
    Cliente* cliente;
    Fatura* fatura;

    public:
    Inadimplentes();
    Inadimplentes(Cliente*, Fatura*);
    vector<Inadimplentes> listarInadimplentes(vector<Cliente*>);
    void setCliente(Cliente*);
    Cliente* getCliente();
    void setFatura(Fatura*);
    Fatura* getFatura();

};

#endif