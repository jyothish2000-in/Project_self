#include "mainwindow.h"
#include <QComboBox>
#include <QVBoxLayout>
#include <QLabel>
QLabel *label;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);
    label = new QLabel("Nothing selected");
    box = new QComboBox();

    layout->addWidget(box);
    layout->addWidget(label);

    box->addItem("None");
    box->addItem("Apple");
    box->addItem("Orange");
    box->addItem("grapes");

    box->setCurrentIndex(0);
    box->setEditable(true);

    connect(box,&QComboBox::currentTextChanged,this,&::MainWindow::selectedItem);

    setCentralWidget(central);

}

void MainWindow::selectedItem(QString str)
{
    label->setText(str);
}

MainWindow::~MainWindow() {}
