#include "mainwindow.h"
#include <QEvent>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* widget = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(widget);
    button = new QPushButton("Button",widget);
    button->setStyleSheet(
        "QPushButton {"
        "background-color: #4CAF50;"
        "border-radius: 5px;"
        "padding: 6px;"
        "color: white;"
        "}"
        );
    line = new QLineEdit(widget);

    layout->addWidget(button);
    layout->addWidget(line);

    setCentralWidget(widget);
    line->installEventFilter(this);

    connect(button,&QPushButton::clicked,this,&MainWindow::setText);
}

void MainWindow::setText()
{
    line->setText("Button clicked!!!");
}

bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    if(watched == line || event->type() == QEvent::MouseButtonPress){
        qDebug()<<"Mouse pressed";
        return false;
    }

    return QObject::eventFilter(watched,event);
}
MainWindow::~MainWindow() {}
