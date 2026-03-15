#include "mainwindow.h"
#include "worker.h"
#include <QLabel>

QLabel *label;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget(this);
      setCentralWidget(widget);
    label = new QLabel(widget);
      label->setText("Hi, starting in");

    label->resize(200, 50);
     label->show();
    QThread * thread = new QThread;
    worker * work = new worker;

    work->moveToThread(thread);
    thread->start();

    connect(thread,&QThread::started,work,&worker::doWork);
    connect(work,&worker::progress,this,[] (int p) {
        label->setText(QString::number(p));
    });

    connect(work,&worker::finished,work,&QObject::deleteLater);
    connect(work,&worker::finished,thread,&QThread::quit);
    connect(work,&worker::finished,thread,&QThread::deleteLater);

}

MainWindow::~MainWindow() {}
