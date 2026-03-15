#include "mainwindow.h"
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget(this);
    table = new QTableView(this);
    model = new QStandardItemModel(2,2,widget);

    model->setHeaderData(0,Qt::Horizontal,"Id");
    model->setHeaderData(1,Qt::Horizontal,"Name");

    model->setItem(0,0,new QStandardItem("25"));
    model->setItem(0,1,new QStandardItem("sai"));

    model->setItem(1,0,new QStandardItem("25"));
    model->setItem(1,1,new QStandardItem("Test"));

    table->setModel(model);
    table->horizontalHeader()->setStretchLastSection(true);
    //table->setSelectionBehavior(QAbstractItemView::SelectRows);
    //table->setAlternatingRowColors(true);

    setCentralWidget(table);
}

MainWindow::~MainWindow() {}
