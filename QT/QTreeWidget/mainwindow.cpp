#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QTreeWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QTreeWidget *tree = new QTreeWidget(this);
    tree->setWindowTitle("QTreeWidget Demo");

    // Define column headers
    tree->setColumnCount(2);
    tree->setHeaderLabels({"Name", "Age"});

    // Parent item
    QTreeWidgetItem *par = new QTreeWidgetItem(tree);
    par->setText(0, "Parent Node");
    par->setText(1, "50");

    // Children
    QTreeWidgetItem *child1 = new QTreeWidgetItem(par);
    child1->setText(0, "Child A");
    child1->setText(1, "20");

    QTreeWidgetItem *child2 = new QTreeWidgetItem(par);
    child2->setText(0, "Child B");
    child2->setText(1, "18");

    setCentralWidget(tree);
}

MainWindow::~MainWindow()
{
    delete ui;
}
