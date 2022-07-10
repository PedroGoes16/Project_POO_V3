#ifndef LOCALIZACAOGEOGRAFICA_H
#define LOCALIZACAOGEOGRAFICA_H

class LocalizacaoGeografica {

    private:
    float latitude;
    float longitude;

    public:
    LocalizacaoGeografica();
    LocalizacaoGeografica(float, float);
    void setLatitude(float);
    float getLatidude();
    void setLongitude(float);
    float getLongitude();

};

#endif