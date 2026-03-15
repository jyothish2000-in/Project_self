#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QCheckBox *selectall;
    QCheckBox *Option1;
    QCheckBox *Option2;
    QCheckBox *Option3;

private slots:
    void selectAllClicked(bool);
    void individualOptionClicked(int);

};
#endif // MAINWINDOW_H
