#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include "reverse.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    reverse r;
private:
    QPushButton* button;
    QLabel* label;
    QLineEdit* edit;

};
#endif // MAINWINDOW_H
