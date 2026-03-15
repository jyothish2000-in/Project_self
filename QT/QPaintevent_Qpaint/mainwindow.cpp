#include "mainwindow.h"
#include <QPainter>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(400,300);
}

void MainWindow::paintEvent(QPaintEvent* ptr)
{
    // QPainter painter(this);

    // QLinearGradient grad(0, 50, 25, 5);

    // grad.setColorAt(0.0, Qt::red);
    // grad.setColorAt(1.0, Qt::yellow);

    // painter.setBrush(grad);
    // painter.drawRect(50, 50, 200, 100);
    // //painter.setRenderHint(QPainter::Antialiasing);
    QPainter painter(this);

    // try commenting this line
    //painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(QPen(Qt::black, 3));
    painter.drawEllipse(50, 50, 150, 150);

}

MainWindow::~MainWindow() {}
