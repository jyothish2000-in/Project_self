#include "mainwindow.h"
#include <QTabWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), line(new QLineEdit()),button(new QPushButton("Button"))
{
    tab = new QTabWidget(this);

    QWidget *widget1 = new QWidget();
    QWidget *widget2 = new QWidget();

    button1 = new QPushButton("button2",widget2);

    QVBoxLayout *layout = new QVBoxLayout(widget1);

    layout->addWidget(line);
    layout->addWidget(button);



    tab->addTab(widget1, "tab1");
    tab->addTab(widget2, "tab2");

    setCentralWidget(tab);
}

MainWindow::~MainWindow() {}
