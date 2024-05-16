/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *titleLineEdit;
    QLineEdit *genreLineEdit;
    QLabel *label_2;
    QPushButton *pushButtonTambah;
    QLineEdit *authorLineEdit;
    QLabel *label_3;
    QPushButton *pushButtonHapus;
    QPushButton *pushButtonUpdate;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(576, 624);
        User->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(User);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 280, 481, 251));
        tableView->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 0, 81, 71));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        titleLineEdit = new QLineEdit(centralwidget);
        titleLineEdit->setObjectName("titleLineEdit");
        titleLineEdit->setGeometry(QRect(240, 90, 271, 24));
        titleLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        genreLineEdit = new QLineEdit(centralwidget);
        genreLineEdit->setObjectName("genreLineEdit");
        genreLineEdit->setGeometry(QRect(240, 190, 271, 24));
        genreLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 80, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(230, 240, 80, 24));
        pushButtonTambah->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        authorLineEdit = new QLineEdit(centralwidget);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(240, 140, 271, 24));
        authorLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 140, 71, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonHapus = new QPushButton(centralwidget);
        pushButtonHapus->setObjectName("pushButtonHapus");
        pushButtonHapus->setGeometry(QRect(430, 240, 80, 24));
        pushButtonHapus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(330, 240, 80, 24));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 190, 71, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 576, 17));
        User->setMenuBar(menubar);
        statusbar = new QStatusBar(User);
        statusbar->setObjectName("statusbar");
        User->setStatusBar(statusbar);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("User", "USER", nullptr));
        label_2->setText(QCoreApplication::translate("User", "Title", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("User", "Create", nullptr));
        label_3->setText(QCoreApplication::translate("User", "Author", nullptr));
        pushButtonHapus->setText(QCoreApplication::translate("User", "Delete", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("User", "Update", nullptr));
        label_4->setText(QCoreApplication::translate("User", "Genre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
