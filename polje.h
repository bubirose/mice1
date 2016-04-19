#ifndef POLJE_H
#define POLJE_H

#define BELO 'b'
#define CRNO 'c'
#define PRAZNO 'p'

class Polje
{
public:
    Polje();

    char vratiStatus();

    void postaviStatus(char c);

    void drugo (Polje& d);
private:
    char _status; // da li je zauzeto polje: b - belo, c - crno, p - prazno
};

#endif // POLJE_H
