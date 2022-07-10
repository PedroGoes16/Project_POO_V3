#ifndef SERVICOCAMPO_H
#define SERVICOCAMPO_H

#include "UnidadeConsumidora.h"

class ServicoCampo {

    private:
    UnidadeConsumidora* uc;
    Data data;
    int sequencia;
    Data data_execucao;
    string categoria_permitida;

    public:
    ServicoCampo();
    ServicoCampo(UnidadeConsumidora*, Data, int);
    void setUnidadeConsumidora(UnidadeConsumidora*);
    UnidadeConsumidora* getUnidadeConsumidora();
    void setData(Data);
    Data getData();
    void setDataExecucao(Data);
    Data getDataExecucao();
    void setSequencia(int);
    int getSequencia();
    void setCategoriaPermitida(string);
    string getCategoriaPermitida();

};

#endif