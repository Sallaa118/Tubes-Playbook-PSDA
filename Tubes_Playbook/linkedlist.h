#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "book.h"

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void append(Book* book);
    void prepend(Book* book);
    void remove(const QString& title);
    void display() const;
    Book* getHead() const;

private:
    Book* m_head;
};

#endif // LINKEDLIST_H
