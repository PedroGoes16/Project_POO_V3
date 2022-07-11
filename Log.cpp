#include "Log.h"

void Log::set_usuario(Usuario* _usuario){
    this->usuario_do_acesso = _usuario;
}

Usuario* Log::get_usuario(){
    return this->usuario_do_acesso;
}

void Log::set_data(Data _data){
    this->momento_do_acesso = _data;
}

Data Log::get_data(){
    return this->momento_do_acesso;
}