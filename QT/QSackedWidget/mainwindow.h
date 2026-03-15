#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QPushButton"
#include "QVBoxLayout"
#include "QStackedWidget"
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QPushButton *button1, *button2;
    QVBoxLayout *layout1, *layout2;
    QStackedWidget *stacked;

};
#endif // MAINWINDOW_H
