#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    QWidget* widget = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(widget);

    edit = new QLineEdit(this);
    edit->setPlaceholderText("Enter your input here");
    button = new QPushButton("Enter",this);
    label = new QLabel(this);

    layout->addWidget(edit);
    layout->addWidget(button);
    layout->addWidget(label);

    connect(button,&QPushButton::clicked,this,[this](){
        label->setText(QString::fromStdString(r.reverse_word(edit->text().toStdString())));
    });

    setCentralWidget(widget);
}

MainWindow::~MainWindow() {}
