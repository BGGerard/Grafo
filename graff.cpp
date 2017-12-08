//
// Created by bgera on 8/12/2017.
//

#include <limits.h>
#include "graff.h"
using namespace std;

int graff::counter = 0;

void graff::addVertice(int p, int x, int y)
{
    vertice* newe = new vertice(p,x,y);
    grafo.vertices.push_back(newe);

}

void graff::addArista(int p, int from, int to)
{
    if(grafo.vertices[from-1]!=NULL && grafo.vertices[to-1]!=NULL)
    {
        vertice* fru = grafo.vertices[from-1];
        vertice* tu = grafo.vertices[to-1];
        arista* snake = new arista(p,fru,tu);
        snake->ID=counter;
        grafo.vertices[from-1]->aristas.push_back(snake);
        counter++;
    }


}

int graff::getMinValue(vertice*v)
{
    int min = INT_MAX;
    for(int j=0;j<v->aristas.size();j++){
        arista *temp2 = v->aristas[j];
        if(temp2->peso<min){
            min = temp2->peso;
        }
    }
    return min;
}



void graff::MakeDijkstra()
{
    for(int i=0;i<grafo.vertices.size();i++){
        vertice *temp = grafo.vertices[i];
        int valorMinimo = getMinValue(temp);
        verticeCam[temp->ID]=true;
        for(int j=0;j<temp->aristas.size();j++){
            arista*temp2 = temp->aristas[j];
            if(temp2->peso==valorMinimo){
                aristaCam[temp2->ID]=true;
            }
        }
    }
}

void graff::deleVertice(int p)
{
    if(p<=grafo.vertices.size())
    {
        for(unsigned int r=0;r<grafo.vertices.size();r++)
        {
            for(unsigned int a=0;a<grafo.vertices[r]->aristas.size();a++)
            {
                if(grafo.vertices[p-1]==grafo.vertices[r]->aristas[a]->fromi || grafo.vertices[p-1]==grafo.vertices[r]->aristas[a]->tomi)
                {
                    deleArista(grafo.vertices[r]->aristas[a]->ID);
                }
            }
        }
        grafo.vertices.erase(grafo.vertices.begin()+(p-1));

    }
}

void graff::deleArista(int p)
{


        for(unsigned int rr=0;rr<grafo.vertices.size();rr++)
        {
            for(unsigned int aa=0;aa<grafo.vertices[rr]->aristas.size();aa++)
            {
                if(grafo.vertices[rr]->aristas[aa]->ID==p-1)
                {
                    grafo.vertices[rr]->aristas.erase(grafo.vertices[rr]->aristas.begin()+(p-1));
                }
            }
        }
        counter--;
        for(unsigned int cc=0;cc<grafo.vertices.size();cc++)
        {
            for(unsigned int aa=0;aa<grafo.vertices[cc]->aristas.size();aa++)
            {
                if(grafo.vertices[cc]->aristas[aa]->ID>=counter)
                {
                    grafo.vertices[cc]->aristas[aa]->ID=grafo.vertices[cc]->aristas[aa]->ID-1;
                }
            }
        }





}
