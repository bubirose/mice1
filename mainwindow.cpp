#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "polje.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Polje dugme2;
    ui->setupUi(this);
    ui->dugme2->setText("Cao");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dugme2_clicked()
{
    ui->dugme2->setStyleSheet("color: green");
}

void MainWindow::on_dugme1_clicked()
{
    ui->dugme1->postaviStatus('b');
    ui->dugme1->drugo(*(ui->dugme2));
}
