#include <iostream>

using namespace std;

class Personagem {
    private:
    int vida;
    long long int vidaMaxima;
    int nivel;
    // necessita de atributos (força, carisma, defesa, etc)

    Personagem();

    Personagem(int vidaInicial, int nivelInicial) {
        this->vida = vidaInicial;
        this->nivel = nivelInicial;
    }

    int setVida(int n) {
       vida = n;
    }

    int setNivel(int n) {
        nivel = n;
    }

    long long int setVidaMaxima(long long int n) {
        this->vidaMaxima = n;
    }
};

