#ifndef BOOK_H
#define BOOK_H

#include <QString>

class Book
{
public:
    Book(const QString& title, const QString& author, const QString& genre);
    QString getTitle() const;
    QString getAuthor() const;
    QString getGenre() const;
    Book* getNext() const;
    void setNext(Book* next);

private:
    QString m_title;
    QString m_author;
    QString m_genre;
    Book* m_next;
};

#endif // BOOK_H
