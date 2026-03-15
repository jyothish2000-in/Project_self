#include "mainwindow.h"
#include "workerthread.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* widget = new QWidget(this);
    label = new QLabel(widget);
    label->setGeometry(50, 50, 200, 50);

    thread1 = new QThread();
    thread2 = new QThread();

    workerThread* worker1 = new workerThread(10);
    workerThread* worker2 = new workerThread(10);

    worker1->moveToThread(thread1);
    worker2->moveToThread(thread2);

    connect(thread1,&QThread::started,worker1,&workerThread::evenNumber);
    connect(thread2,&QThread::started,worker2,&workerThread::oddNumber);

    connect(worker1,&workerThread::number,this,&MainWindow::updateLabel);
    connect(worker2,&workerThread::number,this,&MainWindow::updateLabel);

    connect(thread1,&QThread::finished,thread1,&QThread::deleteLater);
    connect(thread2,&QThread::finished,thread2,&QThread::deleteLater);

    thread1->start();
    thread2->start();

    setCentralWidget(widget);

}

void MainWindow::updateLabel(QString string)
{
    label->setText(string);
}

MainWindow::~MainWindow() {}
