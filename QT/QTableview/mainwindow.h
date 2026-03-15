#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTableView>
#include <QStandardItemModel>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QTableView *table;
    QStandardItemModel *model;
};



#endif // MAINWINDOW_H
