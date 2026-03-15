#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    s = factory::createShape("circle");
}

void MainWindow::paintEvent(QPaintEvent*)
{
    QPainter paint(this);

    if(s)
    {
        s->draw(paint);
    }
}


MainWindow::~MainWindow() {}
