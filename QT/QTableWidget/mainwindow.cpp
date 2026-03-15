#include "mainwindow.h"
#include "QTableWidget"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    table = new QTableWidget(this);
    table->setRowCount(2);
    table->setColumnCount(2);

    table->setHorizontalHeaderLabels({"Name","Age"});

    table->setItem(0,0,new QTableWidgetItem("Jyothish"));
    table->setItem(0,1,new QTableWidgetItem("25"));
    table->setItem(1,0,new QTableWidgetItem("Sai"));
    table->setItem(1,1,new QTableWidgetItem("25"));

    setCentralWidget(table);

}

MainWindow::~MainWindow() {}
