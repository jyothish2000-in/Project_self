#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"factory.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent*);
private:
    shape*s;
};
#endif // MAINWINDOW_H
