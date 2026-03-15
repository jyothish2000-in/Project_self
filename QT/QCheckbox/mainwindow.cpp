#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),selectall(new QCheckBox("Select All")),Option1(new QCheckBox("option1"))
    ,Option2(new QCheckBox("Option2")),Option3(new QCheckBox("Option3"))
{
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);
    layout->addWidget(selectall);
    layout->addWidget(Option1);
    layout->addWidget(Option2);
    layout->addWidget(Option3);

    selectall->setTristate(true);

    connect(selectall,&QCheckBox::clicked,this,&MainWindow::selectAllClicked);

    connect(Option1,&QCheckBox::toggled,this,&MainWindow::individualOptionClicked);
    connect(Option2,&QCheckBox::toggled,this,&MainWindow::individualOptionClicked);
    connect(Option3,&QCheckBox::toggled,this,&MainWindow::individualOptionClicked);

    setCentralWidget(central);

}

void MainWindow::selectAllClicked(bool num)
{
    if(num == true){
        Option1->setChecked(true);
        Option2->setChecked(true);
        Option3->setChecked(true);
    }
    else
    {
        Option1->setChecked(false);
        Option2->setChecked(false);
        Option3->setChecked(false);
    }

}

void MainWindow::individualOptionClicked(int num)
{

    int count = Option1->isChecked()+Option2->isChecked()+Option3->isChecked();

    if(count == 0)
        selectall->setCheckState(Qt::Unchecked);
    else if(count ==3)
        selectall->setCheckState(Qt::Checked);
    else
        selectall->setCheckState(Qt::PartiallyChecked);
}

MainWindow::~MainWindow() {}
