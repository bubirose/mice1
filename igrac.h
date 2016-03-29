#ifndef IGRAC_H
#define IGRAC_H
#include "tabla.h"
#include "polje.h"
#include<set>

class Igrac
{
public:
    Igrac();

    void potez();

private:
    Tabla _tabla;
    std::set<Polje> _polja;
};

#endif // IGRAC_H
