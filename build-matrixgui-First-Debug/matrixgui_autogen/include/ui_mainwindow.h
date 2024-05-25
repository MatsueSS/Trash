/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *matrixValue;
    QLabel *label;
    QLineEdit *iline;
    QLineEdit *jline;
    QTextEdit *matrixResult;
    QLabel *label_2;
    QPushButton *sum;
    QPushButton *min;
    QPushButton *mul;
    QPushButton *div;
    QLineEdit *iline2;
    QLineEdit *jline2;
    QLineEdit *matrixValue2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        matrixValue = new QLineEdit(centralwidget);
        matrixValue->setObjectName(QString::fromUtf8("matrixValue"));
        matrixValue->setGeometry(QRect(70, 150, 231, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 141, 21));
        iline = new QLineEdit(centralwidget);
        iline->setObjectName(QString::fromUtf8("iline"));
        iline->setGeometry(QRect(70, 60, 113, 25));
        jline = new QLineEdit(centralwidget);
        jline->setObjectName(QString::fromUtf8("jline"));
        jline->setGeometry(QRect(70, 100, 113, 25));
        matrixResult = new QTextEdit(centralwidget);
        matrixResult->setObjectName(QString::fromUtf8("matrixResult"));
        matrixResult->setGeometry(QRect(80, 260, 231, 81));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 220, 171, 21));
        sum = new QPushButton(centralwidget);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(70, 430, 91, 51));
        min = new QPushButton(centralwidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setGeometry(QRect(200, 430, 89, 51));
        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(330, 434, 89, 41));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(470, 434, 89, 41));
        iline2 = new QLineEdit(centralwidget);
        iline2->setObjectName(QString::fromUtf8("iline2"));
        iline2->setGeometry(QRect(420, 60, 113, 25));
        jline2 = new QLineEdit(centralwidget);
        jline2->setObjectName(QString::fromUtf8("jline2"));
        jline2->setGeometry(QRect(420, 100, 113, 25));
        matrixValue2 = new QLineEdit(centralwidget);
        matrixValue2->setObjectName(QString::fromUtf8("matrixValue2"));
        matrixValue2->setGeometry(QRect(420, 150, 331, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "press ur matrix", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        min->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
