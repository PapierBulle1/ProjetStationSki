#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDED

#include "Graphe.h"
#include "Arcs.h"


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <queue>
#include <utility>
#include <limits>

class Sommet
{
    private:
        std::vector<std::pair<Arcs *,Sommet *>> m_adjacent;
        std::string m_nom;
        int m_altitude;
        int m_numSommet;
    public:
        Sommet();
        ~Sommet();
};

#endif // SOMMET_H_INCLUDED
