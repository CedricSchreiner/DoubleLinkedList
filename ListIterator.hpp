//
// Created by Cedric on 06.01.2018.
//

#ifndef DOUBLELINKEDLIST_LISTITERATOR_HPP
#define DOUBLELINKEDLIST_LISTITERATOR_HPP

#endif

#include "DoubleLinkedList.hpp"

class ListIterator {
public:
    explicit ListIterator(DoubleLinkedList *list);
    bool hasnext();
    ListElement* next();
    void remove();
protected:
private:
    DoubleLinkedList *list;
    ListElement *iteratorElement;
    ListElement *nextElement;
    int position;
};
