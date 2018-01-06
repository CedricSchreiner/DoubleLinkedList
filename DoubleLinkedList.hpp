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
    void pushBack(const string &value);
    void pushFront(const string &value);
    string popBack();
    string popFront();

    //operators
    bool operator==(const DoubleLinkedList &rhs) const;
    bool operator!=(const DoubleLinkedList &rhs) const;
    DoubleLinkedList operator+(const DoubleLinkedList& right);
    DoubleLinkedList& operator+=(const DoubleLinkedList& right);

protected:
private:
    ListElement *header;
    ListElement *tail;
    int numberOfElements;
};
