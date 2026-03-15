#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool eventFilter(QObject* watched, QEvent* event) override;
private:
    QPushButton* button;
    QLineEdit* line;
private slots:
    void setText();


};
#endif // MAINWINDOW_H
