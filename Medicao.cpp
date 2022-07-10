#include "Medicao.h"

Medicao::Medicao(){}

void Medicao::registrarLeitura(float _nova_leitura, UnidadeConsumidora* _uc){
    ProcessamentoFatura proc;
    Fatura* fatura = proc.gerarFatura((_nova_leitura - _uc->getUltimaLeitura()));
    proc.cadastrarFatura(fatura, _uc);
    _uc->setUltimaLeitura(_nova_leitura);
}