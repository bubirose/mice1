#ifndef TABLA_H
#define TABLA_H
#include "figura.h"
#include "polje.h"
#include "potez.h"

class Tabla
{
public:
    Tabla();

    Figura& vratiFiguruSaPolja(Polje& a_polje);

    void odigrajPotez(Potez& a_potez);

    void postaviFiguru(const Figura& a_figura, const Potez& a_potez);



private:
    Polje _matrica[7][7]; // tabla predstavljena preko matrice

};

#endif // TABLA_H
