#include "mainwindow.h"
#include <QVBoxLayout>
#include "roledelegate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* widget = new QWidget(this);
    setCentralWidget(widget);
    QVBoxLayout* layout = new QVBoxLayout(widget);

    table = new QTableWidget(2,2,this);
    layout->addWidget(table);

    table->setHorizontalHeaderLabels({"Name","Role"});

    table->setItem(0,0, new QTableWidgetItem("Sai"));
    table->setItem(0,1, new QTableWidgetItem("Developer"));

    table->setItem(1,0, new QTableWidgetItem("Ram"));
    table->setItem(1,1, new QTableWidgetItem("Testing"));

    RoleDelegate* delegate = new RoleDelegate(this);

    table->setItemDelegateForColumn(1,delegate);


}

MainWindow::~MainWindow() {}
