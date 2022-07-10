#include "ProcessamentoFatura.h"

ProcessamentoFatura::ProcessamentoFatura(){}

void ProcessamentoFatura::cadastrarFatura(Fatura* _fatura, UnidadeConsumidora* _uc){
    _uc->addFatura(_fatura);
}

void ProcessamentoFatura::pagarFatura(Fatura* _fatura){
    _fatura->setValor(_fatura->getValorFinal());
    if(_fatura->getStatusPagamento() == true){
        cout << "Fatura já está paga" << endl;
    } else {
        _fatura->setStatusPagamento(true);
    }
}

Fatura* ProcessamentoFatura::gerarFatura(float _consumo){
    Data data_aux, data_venc;
    data_aux = data_aux.dateNow();
    if(data_aux.getMes() < 12){
        data_aux.setMes(data_aux.getMes()+1);
        data_venc = data_aux;
    } else {
        data_aux.setMes(1);
        data_aux.setAno(data_aux.getAno()+1);
        data_venc = data_aux;
    }
    Fatura* fatura = new Fatura;
    Fatura fatura_aux(_consumo, data_venc);
    *fatura = fatura_aux;
    return fatura;
}