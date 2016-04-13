#ifndef POTEZ_H
#define POTEZ_H

#include "polje.h"

class Potez
{
public:
    Potez();
    virtual ~Potez() = 0;

protected:
    Polje &saPolja;
    Polje &naPolje;

};

class PrviDeo: public Potez
{
public:


}

#endif // POTEZ_H
