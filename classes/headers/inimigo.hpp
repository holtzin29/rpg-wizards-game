#include <iostream>
#include "../headers/personagem.hpp"
using namespace std;
#ifndef INIMIGO_HPP
#define INIMIGO_HPP

using namespace std;

class Inimigo : public Personagem {
    private:
    string tipo;
    
    public:
    Inimigo();
    Inimigo(string tipo);
};

#endif