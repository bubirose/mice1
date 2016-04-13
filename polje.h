#ifndef POLJE_H
#define POLJE_H
#include <QPushButton>

#define BELO 'b'
#define CRNO 'c'
#define PRAZNO 'p'

class Polje: public QPushButton
{
public:
    Polje();
    Polje(QWidget*);


    char vratiStatus();

    void postaviStatus(char c);

    void drugo (Polje& d);
private:
    char _status; // da li je zauzeto polje: b - belo, c - crno, p - prazno
};

#endif // POLJE_H
