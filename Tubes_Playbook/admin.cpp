#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>
#include <QDebug>

// Implementasi konstruktor Admin
Admin::Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);

    // Buat objek model untuk tabel
    QStandardItemModel *model = new QStandardItemModel(0, 3, this); // 0 baris, 3 kolom
    model->setHorizontalHeaderLabels(QStringList() << "Title" << "Author" << "Genre");

    // Tetapkan model ke QTableView
    ui->tableView->setModel(model);

    // Inisialisasi linked list
    dataBuku = nullptr;
}


// Implementasi destruktor Admin
Admin::~Admin()
{
    // Hapus semua node dari linked list saat objek Admin dihapus
    while (dataBuku != nullptr) {
        Node *temp = dataBuku;
        dataBuku = dataBuku->next;
        delete temp;
    }
    delete ui;
}

// Implementasi slot on_pushButtonTambah_clicked
void Admin::on_pushButtonTambah_clicked()
{
    // Membuat node baru
    Node *node = new Node;

    // Mengisi data buku dari inputan pengguna
    node->buku.title = ui->titleLineEdit->text();
    node->buku.author = ui->authorLineEdit->text();
    node->buku.genre = ui->genreLineEdit->text();

    // Menambahkan node ke linked list
    node->next = dataBuku;
    dataBuku = node;

    // Memperbarui tampilan data
    tampilkanData();
}

// Implementasi slot on_pushButtonHapus_clicked
void Admin::on_pushButtonHapus_clicked()
{
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (!selectedIndexes.isEmpty()) {
        int index = selectedIndexes.at(0).row();
        if (index >= 0) {
            // Hapus node dari linked list
            if (index == 0) {
                Node *temp = dataBuku;
                dataBuku = dataBuku->next;
                delete temp;
            } else {
                Node *prev = nullptr;
                Node *current = dataBuku;
                for (int i = 0; i < index; ++i) {
                    prev = current;
                    current = current->next;
                }
                prev->next = current->next;
                delete current;
            }
            // Memperbarui tampilan data
            tampilkanData();
        }
    }
}

void Admin::on_pushButtonUpdate_clicked() {
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (!selectedIndexes.isEmpty()) {
        int index = selectedIndexes.at(0).row();
        if (index >= 0) {
            // Dapatkan node yang akan diperbarui
            Node *current = dataBuku;
            for (int i = 0; i < index; ++i) {
                current = current->next;
            }

            // Perbarui data buku dengan inputan pengguna
            current->buku.title = ui->titleLineEdit->text();
            current->buku.author = ui->authorLineEdit->text();
            current->buku.genre = ui->genreLineEdit->text();

            // Memperbarui tampilan data
            tampilkanData();
        }
    }
}


// Implementasi fungsi tampilkanData untuk menampilkan data dalam QTableView
void Admin::tampilkanData() {
    // Bersihkan model sebelum menambahkan data baru
    QStandardItemModel *model = new QStandardItemModel(0, 3, this); // 0 baris, 3 kolom
    model->setHorizontalHeaderLabels(QStringList() << "Title" << "Author" << "Genre");

    // Melakukan loop melalui setiap data buku dalam linked list dataBuku
    Node *current = dataBuku;
    int row = 0;
    while (current != nullptr) {
        QList<QStandardItem *> rowItems;

        // Menambahkan QStandardItem untuk Title
        rowItems << new QStandardItem(current->buku.title);

        // Menambahkan QStandardItem untuk Author
        rowItems << new QStandardItem(current->buku.author);

        // Menambahkan QStandardItem untuk Genre
        rowItems << new QStandardItem(current->buku.genre);

        // Menambahkan rowItems ke model, mewakili satu baris data buku dalam QTableView
        model->appendRow(rowItems);

        current = current->next;
        ++row;
    }

    // Set model untuk QTableView
    ui->tableView->setModel(model);
}
