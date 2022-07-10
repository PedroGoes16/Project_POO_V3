#include <iostream>
#include <ctime>
#include <chrono>
#include <string>
#include <vector>
#include "Data.h"
#include "Formato.h"
#include "ExecaoCustomizada.h"

using namespace std;
using namespace chrono;

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

int main(){

    Data data1;

    data1 = data1.dateNow()+20;

    data1.printData();

    return 0;
}