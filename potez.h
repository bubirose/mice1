#ifndef POTEZ_H
#define POTEZ_H

#include "polje.h"

class Potez
{
public:
    Potez(Polje &a_naPolje);
    virtual ~Potez() = 0;




protected:
    Polje &naPolje;

};

class PrviDeo: public Potez
{
public:


};

#endif // POTEZ_H
