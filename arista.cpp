//
// Created by bgera on 8/12/2017.
//

#include "arista.h"

arista::arista()
{
    peso=0;
    fromi=0;
    tomi=0;
    ID=0;
}
arista::arista(int p, vertice *fr, vertice *tm)
{
    peso=p;
    fromi=fr;
    tomi=tm;
    ID=0;
}

