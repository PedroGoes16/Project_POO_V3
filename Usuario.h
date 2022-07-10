#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;

class Usuario {
    private:
    int id;
    string senha;
    string categoria;

    public:
    Usuario();
    Usuario(string, string);
    string getSenha();
    void setSenha(string);
    void setId(int);
    int getId();
    void setCategoria(string);
    string getCategoria();
};

#endif