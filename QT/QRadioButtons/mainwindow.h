#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLabel;
class QRadioButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *label;
    QRadioButton *button1,*button2;

private slots:
    void showLabelInfo(bool);

};
#endif // MAINWINDOW_H
