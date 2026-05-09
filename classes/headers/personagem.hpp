#include <iostream>
using namespace std;

#ifndef PERSONAGEM_HPP
#define PERSONAGEM_HPP
class Personagem {
    private:
    int vida;
    long long int vidaMaxima;
    int nivel;
    int dano;

    public:
    Personagem();
    Personagem(int vidaInicial, int nivelInicial);
    int setVida(int n);
    int setNivel(int n); 
    long long int setVidaMaxima(long long int n);
};
#endif