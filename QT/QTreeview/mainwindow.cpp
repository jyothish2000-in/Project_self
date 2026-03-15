#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget(this);

    tree = new QTreeView(this);

    model = new QStandardItemModel(0,2,this);

    model->setHorizontalHeaderLabels(QStringList() << "Name" << "Age");

    QStandardItem *person = new QStandardItem("person1");
    QStandardItem *age = new QStandardItem("person2");

    person->appendRow(QList<QStandardItem*>() << new QStandardItem("sai")<< new QStandardItem("25"));
    age->appendRow(QList<QStandardItem*>()<<new QStandardItem("Test")<< new QStandardItem("26"));

    model->appendRow(person);
    model->appendRow(age);

    tree->setModel(model);

    setCentralWidget(tree);


}

MainWindow::~MainWindow() {}
