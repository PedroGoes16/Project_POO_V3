#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario(){}

void Funcionario::programarServico(ServicoCampo* _servico){
    int contador_servicos = 0;
    for(ServicoCampo* servico : this->servicos){
        if(servico->getData().diffData(_servico->getData()) == 0){
            contador_servicos++;
        }    
    }
    if(contador_servicos < 8){
        this->servicos.push_back(_servico);
    } else {
        cout << "Trabalhador sobrecarregado nesta data! Servico não programado." << endl;
    }
    
}

void Funcionario::desprogramarServico(ServicoCampo* _servico){
    vector<ServicoCampo*>::iterator servico_removido = this->servicos.begin();
    for(ServicoCampo* servico : this->servicos){
        if(servico == _servico){
            this->servicos.erase(servico_removido);
        }
        servico_removido++;
    }
}

vector<ServicoCampo*> Funcionario::getServicos(){
    return this->servicos;
}

void Funcionario::registrarExecucao(ServicoCampo* _servico){
    // implementar if com data para conferir que só houve 8 execuções por dia
    Data data_aux;
    _servico->setDataExecucao(data_aux.dateNow());
    this->desprogramarServico(_servico);
}

vector<ServicoCampo*> Funcionario::extrairRelatorio(){
    Data data_aux;
    vector<ServicoCampo*> servicos_do_dia;
    for(ServicoCampo* servico : this->servicos){
        if(servico->getData().diffData(data_aux.dateNow()) == 0){
            servicos_do_dia.push_back(servico);
        }    
    }
    return servicos_do_dia;
}

