#include "Medicao.h"

Medicao::Medicao(UnidadeConsumidora* _uc, Data _data, int seq){
    this->setUnidadeConsumidora(_uc);
    this->setData(_data);
    this->setSequencia(seq);
    this->setCategoriaPermitida(this->categoria_permitida);
}

void Medicao::registrarLeitura(float _nova_leitura, UnidadeConsumidora* _uc, PermissaoAcesso* _acesso){
    ProcessamentoFatura proc;
    Fatura* fatura = proc.gerarFatura((_nova_leitura - _uc->getUltimaLeitura()));
    proc.cadastrarFatura(fatura, _uc);
    _uc->setUltimaLeitura(_nova_leitura);
}

string Medicao::getCategoriaPermitida(){
    return this->categoria_permitida;
}