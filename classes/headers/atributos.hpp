#include <iostream>

using namespace std;

#ifndef ATRIBUTOS_HPP
#define ATRIBUTOS_HPP
class Atributo{
    private:
    int carisma, forca, inteligencia, resistencia, destreza;
    long long mana;

    public:
    Atributo();
    Atributo(int carisma, int forca, int inteligencia, int resistencia, int destreza, long long vida, long long mana);
};
#endif