#include "mainwindow.h"
#include <QIcon>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* widget = new QWidget(this);
    button = new QPushButton("Test button",widget);
    icon = new QIcon("C:/Users/jyoth/OneDrive/Pictures/Saved Pictures/house.png");

    button->setIcon(*icon);
    button->setIconSize(QSize(32,32));
    button->setStyleSheet(
        "QPushButton{"
        "background-color:#3498db;"
        "color:white;"
        "border-radius:5px;"
        "padding:25px;"
        "}"
        "QPushButton:hover{"
        "background-color:#2980b9;"
        "}");
    if(icon->isNull())
    {
        qDebug() << "Icon failed to load!";
    }
    setCentralWidget(widget);
}

MainWindow::~MainWindow() {}
