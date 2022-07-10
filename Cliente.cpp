#include "Cliente.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

bool validar_cpf(string cpf){
    int multiplicador = 10;
    int soma = 0, aux, resto, cod_1, cod_2;
    for(int i = 0; i<9; i++){
        aux = cpf[i]-'0';
        soma+= aux*(multiplicador-i);
    }
    resto = soma%11;
    if(resto < 2){
        cod_1 = 0;
    } else {
        cod_1 = 11 - resto;
    }
    if(cod_1 != (cpf[9]-'0')){
        return false;
    } else {
        soma = 0;
        multiplicador = 11;
        for(int i = 0; i<10; i++){
            aux = cpf[i]-'0';
            soma+= aux*(multiplicador-i);
        }
        resto = soma%11;
        if(resto < 2){
            cod_2 = 0;
        } else {
            cod_2 = 11 - resto;
        }
        if(cod_2 != (cpf[10]-'0')){
            return false;
        } else {
            return true;
        }
    }
}

bool validar_cnpj(string cnpj){
    vector<int> multiplicador = {6,5,4,3,2,9,8,7,6,5,4,3,2};
    int soma = 0;
    int aux, resto, cod_1, cod_2;
    for(int i=0; i<12; i++){
        aux = cnpj[i] - '0';
        soma += aux*multiplicador[i+1];
    }
    resto = soma%11;
    if(resto < 2){
        cod_1 = 0;
    } else {
        cod_1 = 11 - resto;
    }
    if(cod_1 != (cnpj[12] - '0')){
        return false;
    } else {
        soma = 0;
        for(int i=0; i<13; i++){
            aux = cnpj[i] - '0';
            soma += aux*multiplicador[i];
        }
        resto = soma%11;
        if(resto < 2){
            cod_2 = 0;
        } else {
            cod_2 = 11 - resto;
        }
        if(cod_2 != (cnpj[13] - '0')){
            return false;
        } else {
            return true;
        }
    }
}

Cliente::Cliente(){
}

Cliente::Cliente(string _nome, Endereco _endereco, long int _telefone, string _cpf_cnpj){

    if(_cpf_cnpj.length() == 11){
        if(!validar_cpf(_cpf_cnpj)){
            cout << "CPF inválido!" << endl;
        }
    } else if(_cpf_cnpj.length() == 14){
        if(!validar_cnpj(_cpf_cnpj)){
            cout << "CNPJ inválido!" << endl;
        }
    } else {
        cout << "CPF/CNPJ inválido!" << endl;
    }

    this->nome = _nome;
    this->endereco = _endereco;
    this->telefone = _telefone;
    this->cpf_cnpj = _cpf_cnpj;
}

void Cliente::setNome(std::string _nome){
    this->nome = _nome;
}

std::string Cliente::getNome(){
    return this->nome;
}

void Cliente::setEndereco(Endereco _endereco){
    this->endereco = _endereco;
}

Endereco Cliente::getEndereco(){
    return this->endereco;
}

void Cliente::setTelefone(long int _telefone){
    this->telefone = _telefone;
}

long int Cliente::getTelefone(){
    return this->telefone;
}

void Cliente::setCpfCnpj(string _cpf_cnpj){
    this->cpf_cnpj = _cpf_cnpj;
}

string Cliente::getCpfCnpj(){
    return this->cpf_cnpj;
}

void Cliente::vincularUnidade(UnidadeConsumidora* _uc){
    if(this->getCpfCnpj().length() == 11){
        if(_uc->getTipo() == "Residencial" || _uc->getTipo() == "Comercial"){
            this->unidades_vinculadas.push_back(_uc);
        } else {
            cout << "Unidade nao vinculada! Cliente Fisico nao aceita este tipo de Unidade." << endl;
        }
    } else if(this->getCpfCnpj().length() == 14){
        if(_uc->getTipo() == "Comercial" || _uc->getTipo() == "Industrial" || _uc->getTipo() == "Iluminacao Publica"){
            this->unidades_vinculadas.push_back(_uc);
        } else {
            cout << "Unidade nao vinculada! Cliente Juridico nao aceita este tipo de Unidade." << endl;
        }
    }
}

void Cliente::desvincularUnidade(UnidadeConsumidora* _uc){
    vector<UnidadeConsumidora*>::iterator unidade_removida = this->unidades_vinculadas.begin();
    for(UnidadeConsumidora* uc : this->unidades_vinculadas){
        if(uc == _uc){
            this->unidades_vinculadas.erase(unidade_removida);
        }
        unidade_removida++;
    }
}

vector<UnidadeConsumidora*> Cliente::getUnidadesVinculadas(){
    return this->unidades_vinculadas;
}