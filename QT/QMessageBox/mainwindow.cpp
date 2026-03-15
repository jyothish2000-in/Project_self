#include "mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <QVBoxLayout>

QLabel *label;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);
    button = new QPushButton("Click me to show meesage box",central);

    label = new QLabel("empty");

    layout->addWidget(button);
    layout->addWidget(label);

    connect(button,&QPushButton::clicked,this,&MainWindow::showMessageBox);
    setCentralWidget(central);
}

void MainWindow::showMessageBox()
{
    box = new QMessageBox(this);
    box->setWindowTitle("Hey Message box here");
    box->setText("Do you want to save?");


    QPushButton *btn1 = box->addButton("save",QMessageBox::AcceptRole);
    QPushButton *btn2 = box->addButton("cancel",QMessageBox::RejectRole);
    box->exec();

    if(box->clickedButton() == btn1)
        label->setText("saved!");
    else if(box->clickedButton() == btn2){
        label->setText("canceled");

    }

}

MainWindow::~MainWindow() {}
