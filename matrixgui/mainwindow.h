#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "/home/michael/VScodeStart/StartLearningCPP/MyPractice2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void add();
    void multy();
    void divided();
    void minus();
    void edit();

private:
    Ui::MainWindow *ui;
    matrix ob1, ob2, res;

    void updateResult();
};
#endif // MAINWINDOW_H
