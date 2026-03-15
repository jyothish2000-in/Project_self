#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QTableWidget;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTableWidget *table;
};
#endif // MAINWINDOW_H
