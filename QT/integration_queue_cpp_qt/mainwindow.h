#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QTableView>
#include "queue.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();
private:
    QPushButton* enqueue, *dequeue;
    QLineEdit* line;
    QTableView* table;
    QStandardItemModel* model;
    queue* q;


};
#endif // MAINWINDOW_H
