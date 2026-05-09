#include <iostream>
using namespace std;

#ifndef ITEM_HPP
#define ITEM_HPP

enum TipoItem {
    CAPA,
    BOTA,
    ARMADURA,
    CAJADO,
};

class Item {
    private:
    string nomeItem;
    int peso;
    int valor;
    TipoItem tipo;

    public:
    Item(string nome, int val, int pes, TipoItem);

// TODO: colocar parametros
    virtual ~Item();

    void mostrarItem();

    int comprarItem();

    void usar();
};
#endif 