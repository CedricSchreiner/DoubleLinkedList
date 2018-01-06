#include <iostream>
#include "DoubleLinkedList.hpp"

using namespace std;

int main() {

    DoubleLinkedList *list = new DoubleLinkedList();
    DoubleLinkedList *list2 = new DoubleLinkedList();


    string string1 = "element1";
    string string2 = "element2";
    string string3 = "element3";

    string string4 = "element1";
    string string5 = "element2";
    string string6 = "element3";

    list2->pushFront(string4);
    list2->pushFront(string5);
    list2->pushFront(string6);

    list->pushFront(string1);
    list->pushFront(string2);
    list->pushFront(string3);

    if (*list == *list2) {
        cout << "gleich" << endl;
    } else {
        cout << "ungleich" << endl;
    }

    cout << list->popBack() << endl;
    cout << list->popFront() << endl;
    cout << list->popFront() << endl;
    cout << "Hello, World!" << endl;

    return 0;
}