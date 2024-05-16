/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

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

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QLineEdit *authorLineEdit;
    QLabel *label_3;
    QPushButton *pushButtonHapus;
    QLineEdit *titleLineEdit;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonTambah;
    QLineEdit *genreLineEdit;
    QLabel *label_4;
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(537, 581);
        Admin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName("centralwidget");
        authorLineEdit = new QLineEdit(centralwidget);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(220, 130, 271, 24));
        authorLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 130, 71, 31));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButtonHapus = new QPushButton(centralwidget);
        pushButtonHapus->setObjectName("pushButtonHapus");
        pushButtonHapus->setGeometry(QRect(410, 230, 80, 24));
        pushButtonHapus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        titleLineEdit = new QLineEdit(centralwidget);
        titleLineEdit->setObjectName("titleLineEdit");
        titleLineEdit->setGeometry(QRect(220, 80, 271, 24));
        titleLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(310, 230, 80, 24));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(210, 230, 80, 24));
        pushButtonTambah->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        genreLineEdit = new QLineEdit(centralwidget);
        genreLineEdit->setObjectName("genreLineEdit");
        genreLineEdit->setGeometry(QRect(220, 180, 271, 24));
        genreLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 180, 71, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 71, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 270, 481, 251));
        tableView->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(81, 81, 81);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, -10, 81, 71));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 537, 17));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName("statusbar");
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "Author", nullptr));
        pushButtonHapus->setText(QCoreApplication::translate("Admin", "Delete", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("Admin", "Update", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("Admin", "Create", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "Genre", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Title", nullptr));
        label->setText(QCoreApplication::translate("Admin", "ADMIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
