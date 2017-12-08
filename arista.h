

#ifndef GRAFO_RISTA_H
#define GRAFO_RISTA_H

#include <iostream>
#include "vertice.h"


class arista
{
public:
    arista();
    arista(int p,vertice* fr,vertice* tm);
    float peso;
    int ID;
    vertice* fromi;
    vertice* tomi;

};


#endif //GRAFO_RISTA_H
