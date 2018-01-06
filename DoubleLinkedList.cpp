//
// Created by Cedric on 06.01.2018.
//

#include <iostream>
#include "DoubleLinkedList.hpp"

DoubleLinkedList::DoubleLinkedList() {
    this->header = nullptr;
    this->tail = nullptr;
    this->numberOfElements = 0;
}

void DoubleLinkedList::pushBack(const string &value) {
    //insert first element
    if (this->numberOfElements == 0) {
        this->header = new ListElement(value);
        this->tail = new ListElement(value);
    } else if (this->numberOfElements == 1) {
        ListElement *element = new ListElement(value);
        this->tail = element;
        this->tail->setPrvious(this->header);
        this->header->setNext(element);
    } else {
        ListElement * element = new ListElement(value);
        element->setPrvious(this->tail);
        this->tail->setNext(element);
        this->tail = element;
    }
    this->numberOfElements++;
}

void DoubleLinkedList::pushFront(const string &value) {
    if (this->numberOfElements == 0) {
        this->header = new ListElement(value);
        this->tail = new ListElement(value);
    } else if (this->numberOfElements == 1) {
        ListElement *element = new ListElement(value);
        this->header = element;
        this->header->setNext(this->tail);
        this->tail->setPrvious(element);
    } else {
        ListElement * element = new ListElement(value);
        element->setNext(this->header);
        this->header->setPrvious(element);
        this->header = element;
    }
    this->numberOfElements++;
}

string DoubleLinkedList::popBack() {
    if (this->numberOfElements == 0) {
        return nullptr;
    } else if (this->numberOfElements == 1) {
        this->numberOfElements--;
        string value = this->tail->getValue();
        this->header = nullptr;
        this->tail = nullptr;
        return value;
    } else {
        this->numberOfElements--;
        string value = this->tail->getValue();
        this->tail = this->tail->getPrevious();
        this->tail->getNext()->setPrvious(nullptr);
        this->tail->setNext(nullptr);
        return value;
    }
}

string DoubleLinkedList::popFront() {
    if (this->numberOfElements == 0) {
        return nullptr;
    } else if (this->numberOfElements == 1) {
        this->numberOfElements--;
        string value = this->header->getValue();
        this->header = nullptr;
        this->tail = nullptr;
        return value;
    } else {
        this->numberOfElements--;
        string value = this->header->getValue();
        this->header = this->header->getNext();
        this->header->getPrevious()->setNext(nullptr);
        this->header->setPrvious(nullptr);
        return value;
    }
}

bool DoubleLinkedList::operator==(const DoubleLinkedList &rhs) const {
    ListElement *thisElement = this->header;
    ListElement *rhsElement = rhs.header;

    if (thisElement == nullptr && rhsElement != nullptr) {
        return false;
    }

    while (thisElement != nullptr) {
        if (rhsElement == nullptr || *rhsElement != *thisElement) {
            return false;
        }

        rhsElement = rhsElement->getNext();
        thisElement = thisElement->getNext();
    }
    return true;
}

bool DoubleLinkedList::operator!=(const DoubleLinkedList &rhs) const {
    return !(rhs == *this);
}
