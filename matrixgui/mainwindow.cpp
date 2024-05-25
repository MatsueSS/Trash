#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "/home/michael/VScodeStart/StartLearningCPP/MyPractice2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(ui->iline, &QLineEdit::textChanged, this, &MainWindow::add);
//    connect(ui->jline, &QLineEdit::textChanged, this, &MainWindow::add);
    connect(ui->matrixValue, &QLineEdit::editingFinished, this, &MainWindow::edit);
    connect(ui->matrixValue2, &QLineEdit::editingFinished, this, &MainWindow::edit);
    connect(ui->sum, &QPushButton::clicked, this, &MainWindow::add);
    connect(ui->min, &QPushButton::clicked, this, &MainWindow::minus);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::multy);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::divided);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::edit()
{
    int i = ui->iline->text().toInt();
    int j = ui->jline->text().toInt();
    int i2 = ui->iline2->text().toInt();
    int j2 = ui->jline2->text().toInt();

    if(i > 0 && j > 0 && i2 > 0 && j2 > 0) {
        ob1.set_i_j(i, j);
        ob1.fromString(ui->matrixValue->text().toStdString());

        ob2.set_i_j(i, j);
        ob2.fromString(ui->matrixValue2->text().toStdString());
    }
}

void MainWindow::add()
{
    matrix result = ob1 + ob2;
    res = result;
    updateResult();
}

void MainWindow::minus()
{
    matrix result = ob1 - ob2;
    res = result;
    updateResult();
}

void MainWindow::multy()
{
    matrix result = ob1.operator*(ob2);
    res = result;
    updateResult();
}

void MainWindow::divided()
{
    int num;
    num = ui->divline->text().toInt();
    matrix result = ob1 / num;
    res = result;
    updateResult();
}

void MainWindow::updateResult()
{
    ui->matrixResult->clear();
    ui->matrixResult->setText(QString::fromStdString(res.toString()));
}
