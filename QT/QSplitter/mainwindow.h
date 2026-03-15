#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QSplitter;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QSplitter *splitter;
};
#endif // MAINWINDOW_H
