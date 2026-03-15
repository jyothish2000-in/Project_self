#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), button1(new QPushButton("go to page2")), button2(new QPushButton("go to page1"))
{
    QWidget *widget1 = new QWidget;
    QWidget *widget2 = new QWidget;

    stacked = new QStackedWidget(this);
    QVBoxLayout *layout1 = new QVBoxLayout(widget1);
    layout1->addWidget(button1);

    stacked->addWidget(widget1);

    QVBoxLayout *layout2 = new QVBoxLayout(widget2);
    layout2->addWidget(button2);

    stacked->addWidget(widget2);



    connect(button1, &QPushButton::clicked, [&]() {
        stacked->setCurrentIndex(1);
    });

    connect(button2,&QPushButton::clicked, [&]() {
        stacked->setCurrentIndex(0);
    });

    setCentralWidget(stacked);


}

MainWindow::~MainWindow() {}
