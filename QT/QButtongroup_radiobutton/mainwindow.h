#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QRadioButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QLabel *label;
    QButtonGroup *group;
    QRadioButton *button1;
private slots:
    void showLabelText(bool);
};

class SecondWindow : public QMainWindow
{
    Q_OBJECT
    QRadioButton *button2 = new QRadioButton("Button2");
};

#endif // MAINWINDOW_H
