#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QLabel>
#include "QMutex"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMutex m;
private:
    QThread* thread1, *thread2;
    QLabel* label;
private slots:
    void updateLabel(QString);

};
#endif // MAINWINDOW_H
