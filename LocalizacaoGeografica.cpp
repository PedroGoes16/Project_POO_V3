#include "LocalizacaoGeografica.h"

LocalizacaoGeografica::LocalizacaoGeografica(){};

LocalizacaoGeografica::LocalizacaoGeografica(float _latitude, float _longitude){
    this->latitude = _latitude;
    this->longitude = _longitude;
}

void LocalizacaoGeografica::setLatitude(float _latitude){
    this->latitude = _latitude;
}

float LocalizacaoGeografica::getLatidude(){
    return this->latitude;
}

void LocalizacaoGeografica::setLongitude(float _longitude){
    this->longitude = _longitude;
}

float LocalizacaoGeografica::getLongitude(){
    return this->longitude;
}