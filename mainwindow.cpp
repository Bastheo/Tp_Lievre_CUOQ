#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <animal.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tab[0] = new Lievre(ui->Lapin);
    tab[1] = new Tortue(ui->Tortue);

    ui->Lapin->setPixmap(QPixmap(":images/Lapin.jpg").scaledToWidth(200));
    ui->Tortue->setPixmap(QPixmap(":images/Tortue.jpg").scaledToWidth(200));

    startTimer(50);
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    on_GoFast_clicked();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_GoFast_clicked()
{    
    tab[0]->avancer();
    tab[1]->avancer();
}


void MainWindow::on_Come_back_clicked()
{
    tab[0]->init();
    tab[1]->init();
}

