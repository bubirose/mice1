#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include "polje.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QPushButton dugme1;

    w.show();
    
    return a.exec();
}
