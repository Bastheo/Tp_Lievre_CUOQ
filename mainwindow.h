#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <animal.h>
#include <QTimer>
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timerEvent(QTimerEvent *e);
    Animal *tab[2];

private slots:
    void on_GoFast_clicked();
    void on_Come_back_clicked();

private:
    Ui::MainWindow *ui;
    QTimer timer;
};
#endif // MAINWINDOW_H
