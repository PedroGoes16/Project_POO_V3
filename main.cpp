#include "Cliente.h"
#include "Data.h"
#include "Dados.h"
#include "Eletricista.h"
#include "ExecaoCustomizada.h"
#include "Formato.h"
#include "Endereco.h"
#include "Fatura.h"
#include "LocalizacaoGeografica.h"
#include "Leiturista.h"
#include "UnidadeConsumidora.h"
#include "PermissaoAcesso.h"
#include "ProcessamentoFatura.h"
#include "Inadimplentes.h"
#include "Medicao.h"
#include "ServicoCampo.h"
#include "Usuario.h"
#include "Singleton.h"
#include "Log.h"

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    Dados banco_de_dados;

    ProcessamentoFatura processador_de_faturas;

    Inadimplentes Irregulares;

    Endereco end1("Rua da Mata", 200, "Centro", "AP 102", 31030085, "Belo Horizonte", "MG");

    Cliente cliente1("Pedro", end1, 37998230505, "11672417627");

    Cliente cliente2("Marcela", end1, 37998230606, "11672417627");

    Cliente cliente3("Helder", end1, 37998230707, "41072668000121");

    UnidadeConsumidora uc1("0001", 0, end1);

    UnidadeConsumidora uc2("0002", 1, end1);

    UnidadeConsumidora uc3("0003", 2, end1);

    banco_de_dados.cadastrarCliente(&cliente1);
    banco_de_dados.cadastrarCliente(&cliente2);
    banco_de_dados.cadastrarCliente(&cliente3);
    banco_de_dados.cadastrarUnidade(&uc1);
    banco_de_dados.cadastrarUnidade(&uc2);
    banco_de_dados.cadastrarUnidade(&uc3);
    cliente1.vincularUnidade(&uc1);
    cliente2.vincularUnidade(&uc2);
    cliente3.vincularUnidade(&uc3);

    Eletricista usuario_logado;

    Usuario *s2 = Singleton::getInstance(&usuario_logado);

    PermissaoAcesso permissao_acesso(s2);

    Data data;

    Medicao medicao1(&uc1, data, 2);

    Eletricista eletricista1;

    Formato form("lala");

    Data data2(form);

    eletricista1.programarServico(&medicao1, permissao_acesso);
    

    /*cout << &usuario_logado << endl;

    Usuario *s2 = Singleton::getInstance(&usuario_logado);

    PermissaoAcesso permissao_acesso(s2);

    cout << s2 << endl;

    cout << s2->getId() << endl;

    cout << permissao_acesso.getAcesso() << endl;*/

    /*Dados banco_de_dados;

    ProcessamentoFatura processador_de_faturas;

    Inadimplentes Irregulares;

    Endereco end1("Rua da Mata", 200, "Centro", "AP 102", 31030085, "Belo Horizonte", "MG");

    Cliente cliente1("Pedro", end1, 37998230505, "11672417627");

    Cliente cliente2("Marcela", end1, 37998230606, "11672417627");

    Cliente cliente3("Helder", end1, 37998230707, "41072668000121");

    UnidadeConsumidora uc1("0001", 0, end1);

    UnidadeConsumidora uc2("0002", 1, end1);

    UnidadeConsumidora uc3("0003", 2, end1);

    Medicao med;

    med.registrarLeitura(100, &uc1);
    med.registrarLeitura(200, &uc2);
    med.registrarLeitura(300, &uc3);

    banco_de_dados.cadastrarCliente(&cliente1);
    banco_de_dados.cadastrarCliente(&cliente2);
    banco_de_dados.cadastrarCliente(&cliente3);
    banco_de_dados.cadastrarUnidade(&uc1);
    banco_de_dados.cadastrarUnidade(&uc2);
    banco_de_dados.cadastrarUnidade(&uc3);
    cliente1.vincularUnidade(&uc1);
    cliente2.vincularUnidade(&uc2);
    cliente3.vincularUnidade(&uc3);

    for(Cliente* cliente : banco_de_dados.getClientesCadastrados()){
        for(UnidadeConsumidora* uc : cliente->getUnidadesVinculadas()){
            for(Fatura* fatura: uc->getFaturas()){
                cout << fatura->getValorFinal() << endl;
            }
        }
    }*/

    return 0;
}
