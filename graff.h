//
// Created by bgera on 8/12/2017.
//

#ifndef GRAFO_GRAFF_H
#define GRAFO_GRAFF_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <queue>
#include "lista.h"
#include "arista.h"
#include "vertice.h"

class graff
{
public:
lista grafo;

    void addVertice(int p, int x, int y);
    void addArista(int p, int from, int to);
    void MakeDijkstra();
    void deleVertice(int p);
    void deleArista(int p);
    int getMinValue(vertice*v);


private:
    static int counter;
    static int counterV;
    std::vector<bool> verticeCam;
    std::vector<bool> aristaCam;

};


#endif //GRAFO_GRAFF_H
