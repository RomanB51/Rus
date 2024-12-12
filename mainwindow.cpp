#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include<QFile>
#include<QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QFile file("D:/C++/QT creator/text.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){ //Проверка на то, можем ли мы что-либо записывать
        QMessageBox::warning(this, "Title", "Не удалось открыть файл");
    }
    QTextStream in(&file);
    QString k;
    QString* j = &k;
    int g = 0;
    while(in.readLineInto(j, 1))
        if(*j == "о")
            g++;
    qDebug() << g;

    QString text = in.readAll();
    qDebug() << text;
    file.close();
}

