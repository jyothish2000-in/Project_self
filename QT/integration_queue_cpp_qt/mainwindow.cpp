#include "mainwindow.h"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "queue.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    q = new queue;
    QWidget* widget = new QWidget(this);

    QVBoxLayout* vlayout = new QVBoxLayout(widget);
    QHBoxLayout* hlayout = new QHBoxLayout();
    model = new QStandardItemModel(this);

    table = new QTableView(this);

    enqueue = new QPushButton("Enqueue",this);
    dequeue = new QPushButton("Dequeue",this);

    line = new QLineEdit(this);

    hlayout->addWidget(enqueue);
    hlayout->addWidget(dequeue);

    vlayout->addWidget(line);
    vlayout->addWidget(table);
    vlayout->addLayout(hlayout);

    connect(enqueue,&QPushButton::clicked,this,[this](){
        int val = line->text().toInt();
        q->enqueue(val);
        display();

    });
    connect(dequeue,&QPushButton::clicked,this,[this](){
        q->dequeue();
        display();
    });

    setCentralWidget(widget);

}

void MainWindow::display()
{
    model->clear();
    node* temp = q->getFront();
    node* countPtr = temp;
    int count = 0;
    while(countPtr)
    {
        count++;
        countPtr = countPtr->next;
    }
    model->setRowCount(1);
    model->setColumnCount(count);
    model->setHorizontalHeaderLabels({"Queue data"});
    int i=0;

    while(temp){
        QStandardItem* item = new QStandardItem(QString::number(temp->data));
        model->setItem(0,i,item);
        i++;
        temp = temp->next;
    }
    table->setModel(model);
}

MainWindow::~MainWindow() {}
