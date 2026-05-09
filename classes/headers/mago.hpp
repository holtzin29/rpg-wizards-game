#include <iostream>
#include "personagem.hpp"
#ifndef MAGO_HPP
#define MAGO_HPP
enum Tipo {
    FOGO,
    GELO,
    TERRA,
    AR
};

class Mago : public Personagem {
    private: 
    string cajado;
    Tipo tipo;
    
};

#endif