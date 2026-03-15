#include "mainwindow.h"
#include "QSplitter"
#include "QLineEdit"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    splitter = new QSplitter(Qt::Vertical);

    splitter->addWidget(new QLineEdit("left"));
    splitter->addWidget(new QLineEdit("right"));

    splitter->show();

}

MainWindow::~MainWindow() {}
