#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QMessageBox;
class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QMessageBox *box;
    QPushButton *button;
private slots:
    void showMessageBox();

};
#endif // MAINWINDOW_H
