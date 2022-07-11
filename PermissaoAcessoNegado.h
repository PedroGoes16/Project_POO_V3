#ifndef PERMISSAOACESSONEGADO_H
#define PERMISSAOACESSONEGADO_H

#include <exception>
#include <fstream>
#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

class PermissaoAcessoNegado : public exception{

protected:
    std::string message;
    int n_linha;

public:
    PermissaoAcessoNegado(std::string _message, int _line) {
        this->message = _message;
        this->n_linha = _line;
    }

    void Message(){
        cout << message << endl;
    }
};


#endif