#include "mainwindow.h"
#include "admin.h"
#include "user.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox> // Menambahkan header untuk QMessageBox

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Menghubungkan sinyal klik tombol dengan slot login()
    connect(ui->pushButtonLogin, &QPushButton::clicked, this, &MainWindow::onLoginButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLoginButtonClicked()
{
    // Mendapatkan nilai dari field username dan password
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    // Memanggil fungsi login dengan nilai username dan password yang dimasukkan
    login(username, password);
}

void MainWindow::login(const QString& username, const QString& password)
{
    // Cek apakah username dan password sesuai dengan admin
    if (username == "admin" && password == "admin123") {
        // Jalankan aksi untuk peran admin
        Admin *admin = new Admin();
        admin->show();
    }
    // Cek apakah username dan password sesuai dengan pengguna biasa
    else if (username == "user" && password == "user123") {
        // Jalankan aksi untuk peran pengguna biasa
        User *user = new User();
        user->show();
    }
    else {
        // Tampilkan pesan kesalahan jika kredensial tidak valid
        QMessageBox::critical(this, "Login Failed", "Invalid Username or Password!");
    }
}
