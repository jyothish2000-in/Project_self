#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QComboBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QComboBox *box;
private slots:
    void selectedItem(QString);

};
#endif // MAINWINDOW_H
