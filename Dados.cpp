#include "Dados.h"

Dados::Dados(){}

Dados::~Dados(){}

vector<Cliente*> Dados::getClientesCadastrados(){
    return this->clientes_cadastrados;
}

vector<UnidadeConsumidora*> Dados::getUnidadesCadastradas(){
    return this->unidades_cadastradas;
}

vector<Fatura*> Dados::getFaturasCadastradas(){
    return this->faturas_cadastradas;
}

void Dados::cadastrarCliente(Cliente* _cliente){
    this->clientes_cadastrados.push_back(_cliente);
}

void Dados::cadastrarUnidade(UnidadeConsumidora* _uc){
    this->unidades_cadastradas.push_back(_uc);
}

void Dados::cadastrarFatura(Fatura* _fatura){
    this->faturas_cadastradas.push_back(_fatura);
}

void Dados::removerCliente(Cliente* _cliente){
    vector<Cliente*>::iterator cliente_removido = this->clientes_cadastrados.begin();
    for(Cliente* cliente : this->clientes_cadastrados){
        if(cliente == _cliente){
            this->clientes_cadastrados.erase(cliente_removido);
        }
        cliente_removido++;
    }
}

void Dados::removerUnidade(UnidadeConsumidora* _uc){
    vector<UnidadeConsumidora*>::iterator unidade_removida = this->unidades_cadastradas.begin();
    for(UnidadeConsumidora* uc : this->unidades_cadastradas){
        if(uc == _uc){
            this->unidades_cadastradas.erase(unidade_removida);
        }
        unidade_removida++;
    }
}

void Dados::removerFatura(Fatura* _fatura){
    vector<Fatura*>::iterator fatura_removida = this->faturas_cadastradas.begin();
    for(Fatura* fatura : this->faturas_cadastradas){
        if(fatura == _fatura){
            this->faturas_cadastradas.erase(fatura_removida);
        }
        fatura_removida++;
    }
}