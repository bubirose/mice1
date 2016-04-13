#ifndef FIGURA_H
#define FIGURA_H

#include "polje.h"


#define BELO 'b'
#define CRNO 'c'
#define PRAZNO 'p'

class Figura
{
public:
    Figura();

    char vratiBoju() const;

    Polje& vratiPoziciju() const;

    void postaviPoziciju(Polje& a_pozicija);

private:
    char boja;
    Polje &pozicija;
};

#endif // FIGURA_H
