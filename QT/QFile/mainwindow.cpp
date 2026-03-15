#include "mainwindow.h"
#include <QVBoxLayout>
#include <QTextEdit>
QTextEdit *edit;
#include<QFileDialog>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    button = new QPushButton("click here to display text in file");
    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    edit = new QTextEdit;

    QVBoxLayout *layout = new QVBoxLayout(central);

    layout->addWidget(button);
    layout->addWidget(edit);

    connect(button,&QPushButton::clicked,this,&MainWindow::handleFile);
}

void MainWindow::handleFile()
{
    QString filePath =
        QFileDialog::getOpenFileName(
            this,
            "Open File",
            "",
            "Text Files (*.txt);;All Files (*.*)"
            );

    // 2️⃣ Cancel pressed
    if (filePath.isEmpty())
        return;

    // 3️⃣ Open file
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Cannot open file");
        return;
    }

    // 4️⃣ Read file
    QTextStream in(&file);
    QString content = in.readAll();

    // 5️⃣ Display content
    edit->setText(content);

    // 6️⃣ Close file
    file.close();
}

MainWindow::~MainWindow() {}
