#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString lightTheme = R"(
    QWidget {
        background-color: white;
        color: black;
    }

    QPushButton {
        background-color: #f0f0f0;
        color: black;
        border: 1px solid gray;
        border-radius: 5px;
        padding: 6px;
    }
    )";


    qApp->setStyleSheet(lightTheme);
    MainWindow w;
    w.show();
    return a.exec();
}
