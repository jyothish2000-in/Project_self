#include "mainwindow.h"
#include <QLabel>
#include <QRadioButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);
    label = new QLabel("Nothing selected..");
    button1 = new QRadioButton("Button1");
    button2 = new QRadioButton("Button2");

    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(label);

    connect(button1,&QRadioButton::toggled,this,&MainWindow::showLabelInfo);
    connect(button2,&QRadioButton::toggled,this,&MainWindow::showLabelInfo);

    setCentralWidget(central);

}

void MainWindow::showLabelInfo(bool flag)
{
    if(!flag)
        return;

    QRadioButton *obj = qobject_cast<QRadioButton*>(sender());
    if(!obj)
        return;

    label->setText("Selected : "+obj->text());
}

MainWindow::~MainWindow() {}
