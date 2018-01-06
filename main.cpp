#include <iostream>
#include "DoubleLinkedList.hpp"

using namespace std;

int main() {

    auto *list = new DoubleLinkedList();
    char *test[] = {"ss2", "ss34"};
    DoubleLinkedList l(test);
    auto *list2 = new DoubleLinkedList();


    char *string1 = "element1";
    char *string2 = "element2";
    char *string3 = "element3";

    char *string4 = "element4";
    char *string5 = "element5";
    char *string6 = "element6";

    list->pushBack(string1);
    list->pushBack(string2);
    list->pushBack(string3);

    list2->pushBack(string4);
    list2->pushBack(string5);
    list2->pushBack(string6);

    DoubleLinkedList test2(*list);
    cout << "ok" << test2[0] << endl;

    char *pl = test2.popBack();

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