#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QDate>
#include <QStandardItemModel>

// Struktur data untuk menyimpan informasi buku
struct Buku {
    QString title;
    QString author;
    QString genre;
};

// Struktur data untuk node dalam linked list
struct Node {
    Buku buku;
    Node *next;
};

QT_BEGIN_NAMESPACE
namespace Ui { class Admin; }
QT_END_NAMESPACE

class Admin : public QMainWindow
{
    Q_OBJECT

public:
    Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_pushButtonTambah_clicked();
    void on_pushButtonHapus_clicked();
    void on_pushButtonUpdate_clicked();

private:
    Ui::Admin *ui;
    Node *dataBuku;

    void tampilkanData();
};

#endif // ADMIN_H
