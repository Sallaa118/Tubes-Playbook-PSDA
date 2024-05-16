#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QDate>
#include <QStandardItemModel>

// Struktur data untuk menyimpan informasi buku
struct Bukus {
    QString title;
    QString author;
    QString genre;
};

// Struktur data untuk node dalam linked list
struct Nodes {
    Bukus buku;
    Nodes *next;
};

QT_BEGIN_NAMESPACE
namespace Ui { class User; }
QT_END_NAMESPACE

class User : public QMainWindow
{
    Q_OBJECT

public:
    User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_pushButtonTambah_clicked();
    void on_pushButtonHapus_clicked();
    void on_pushButtonUpdate_clicked();

private:
    Ui::User *ui;
    Nodes *dataBuku;

    void tampilkanData();
};

#endif // USER_H
