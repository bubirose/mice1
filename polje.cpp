#include "polje.h"
#include <QString>
Polje::Polje()
{}

Polje::Polje(QWidget* d)
    :QPushButton(d)
{
}
void Polje::postaviStatus(char c)
{
    this->_status = c;
    QString ime(c);
    this->setText(ime);

}
void Polje::drugo (Polje& d){

    d.setText("idi na pakete");
    if(this->_status == 'b')
        d.setStyleSheet("background-color: red");
}
