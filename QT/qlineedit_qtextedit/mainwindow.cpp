#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)    
{
    QWidget *central = new QWidget(this);
    line = new QLineEdit;
    text = new QTextEdit;
    text->setReadOnly(true);
    text->setVisible(false);
    button = new QPushButton;
    button->setText("Click Here");
    QVBoxLayout *layout = new QVBoxLayout(central);

    layout->addWidget(line);
    layout->addWidget(button);
    layout->addWidget(text);

    line->setPlaceholderText("Type Here ......");



    connect(button,&QPushButton::clicked,this,[this]()
            {addText(line->text());});
    setCentralWidget(central);

}

void MainWindow::addText(QString s)
{
    text->setVisible(true);

    text->setText(s);
    text->setStyleSheet(
        "QTextEdit {"
        " background: transparent;"
        "  background-image: url(\"C:/Users/jyoth/OneDrive/Pictures/Saved Pictures/house.png\");"
        "  background-repeat: no-repeat;"
        "  background-position: center;"
        "}"
        );
}

MainWindow::~MainWindow()
{
}
