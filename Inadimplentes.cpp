#include "Inadimplentes.h"

Inadimplentes::Inadimplentes(){}

Inadimplentes::Inadimplentes(Cliente* _cliente, Fatura* _fatura){
    this->cliente = _cliente;
    this->fatura = _fatura;
}

void Inadimplentes::setCliente(Cliente* _cliente){
    this->cliente = _cliente;
}

Cliente* Inadimplentes::getCliente(){
    return this->cliente;
}

void Inadimplentes::setFatura(Fatura* _fatura){
    this->fatura = _fatura;
}

Fatura* Inadimplentes::getFatura(){
    return this->fatura;
}

vector<Inadimplentes> Inadimplentes::listarInadimplentes(vector<Cliente*> _clientes){
    vector<Inadimplentes> lista_inadimplentes;
    for(Cliente* c : _clientes){
        for(UnidadeConsumidora* uc : c->getUnidadesVinculadas()){
            for(Fatura* f : uc->getFaturas()){
                int atraso = (-1)*f->getVencimento().diffData(f->getVencimento().dateNow());
                if(atraso > 0 && !f->getStatusPagamento()){
                    Inadimplentes inad_aux(c, f);
                    lista_inadimplentes.push_back(inad_aux);
                }
            }
        }
    }
    return lista_inadimplentes;
}