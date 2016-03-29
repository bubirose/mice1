#ifndef POLJE_H
#define POLJE_H
#include <QPushButton>
class Polje: public QPushButton
{
public:
    Polje();
    Polje(QWidget*);


    char getStatus();

    void setStatus(char c);

    void drugo (Polje& d);
private:
    char _status; // da li je zauzeto polje: b - belo, c - crno, p - prazno
};

#endif // POLJE_H
