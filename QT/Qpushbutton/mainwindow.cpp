#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), button(new QPushButton("Hey",this))
{
    ui->setupUi(this);
    setCentralWidget(button);
}

MainWindow::~MainWindow()
{
    delete ui;
}
