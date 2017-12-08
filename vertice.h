//
// Created by bgera on 8/12/2017.
//

#ifndef GRAFO_VERTICE_H
#define GRAFO_VERTICE_H
#include <iostream>
#include <vector>
// En el proyecto ocupo mi propio vector pero al  momento de de subir est codigo  me estuvo ocacionando problemas asi que ocupare vector solo momentaneamente
class arista;

class vertice
{
public:
    vertice();
    vertice(int p, int x, int y);
    int Nombre;
    int ex;
    int ey;
    int ID;
    std::vector<arista*> aristas;

};


#endif //GRAFO_VERTICE_H
