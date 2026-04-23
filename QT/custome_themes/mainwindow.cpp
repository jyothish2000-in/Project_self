#include "mainwindow.h"
#include <QApplication>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* widget = new QWidget(this);
    button = new QPushButton("Button",widget);

    QToolBar *toolbar = addToolBar("Main Toolbar");
    toolbar->setIconSize(QSize(24, 24));
    // Create actions
    QAction *saveAction = new QAction(QIcon("C:/Users/jyoth/OneDrive/Pictures/Saved Pictures/beast.jpg"),"Save", widget);

    QAction *openAction = new QAction("Open", this);
    QAction *undoAction = new QAction("Undo", this);

    // Add actions to toolbar
    toolbar->addAction(saveAction);
    toolbar->addAction(openAction);
    toolbar->addAction(undoAction);
    this->setWindowIcon(QIcon("C:/Users/jyoth/OneDrive/Pictures/Saved Pictures/beast.jpg"));
}

MainWindow::~MainWindow() {}
