//
// Created by Cedric on 06.01.2018.
//

#include "ListElement.hpp"

#ifndef DOUBLELINKEDLIST_DOUBLELINKEDLIST_HPP
#define DOUBLELINKEDLIST_DOUBLELINKEDLIST_HPP

#endif

class DoubleLinkedList {
public:
    DoubleLinkedList();
    DoubleLinkedList(char **array);
    DoubleLinkedList(const DoubleLinkedList &rhs);
    void pushBack(char *value);
    void pushFront(char *value);
    char* popBack();
    char* popFront();

    //operators
    bool operator==(const DoubleLinkedList &rhs) const;
    bool operator!=(const DoubleLinkedList &rhs) const;
    DoubleLinkedList& operator=(const DoubleLinkedList& right);
    DoubleLinkedList operator+(const DoubleLinkedList& right);
    DoubleLinkedList& operator+=(const DoubleLinkedList& right);
    char* operator[](int i);

protected:
private:
    ListElement *header;
    ListElement *tail;
    int numberOfElements;
};
