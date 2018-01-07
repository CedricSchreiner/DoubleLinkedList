#include <iostream>
#include "ListIterator.hpp"

using namespace std;

bool checkList(DoubleLinkedList *, char **, int);

void testList() {
    auto *list = new DoubleLinkedList();
    list->pushFront("element1");
    list->pushBack("element2");
    list->pushFront("element3");
    list->pushFront("element4");
    list->pushFront("element5");
    list->pushBack("element6");
    list->pushBack("element7");

    char* elements[] = {"element5", "element4", "element3", "element1", "element2", "element6", "element7"};

    //Test
    cout << checkList(list, elements, 7) << endl;
    //Test
    cout << (list->popFront() == "element5") << endl;
    //Test
    cout << (list->popBack() == "element7") << endl;
    //Test
    cout << (list->popFront() == "element4") << endl;
    //Test
    cout << (list->popFront() == "element3") << endl;
    //Test
    cout << (list->popBack() == "element6") << endl;
    //Test
    cout << (list->popBack() == "element2") << endl;
    //Test
    cout << (list->popFront() == "element1") << endl;

    list->pushFront("element1");
    list->pushBack("element2");
    list->pushFront("element3");
    list->pushFront("element4");
    list->pushFront("element5");
    list->pushBack("element6");
    list->pushBack("element7");

    auto *iterator = new ListIterator(list);

    //Test
    cout << iterator->hasNext() << endl;
    //Test
    cout << (iterator->next()->getValue() == "element5") << endl;
    iterator->remove();
    //Test
    cout << (iterator->next()->getValue() == "element4") << endl;
    //Test
    cout << (iterator->next()->getValue() == "element3") << endl;
    iterator->remove();
    //Test
    cout << (iterator->next()->getValue() == "element1") << endl;
    //Test
    cout << (iterator->next()->getValue() == "element2") << endl;
    iterator->remove();
    //Test
    cout << (iterator->next()->getValue() == "element6") << endl;
    //Test
    cout << (iterator->next()->getValue() == "element7") << endl;
    iterator->remove();

    char* elements2[] = {"element4", "element1", "element6"};

    //Test
    cout << checkList(list, elements2, 3) << endl;
}

bool checkList(DoubleLinkedList *list, char **array, int size) {
    auto *iterator = new ListIterator(list);
    int arrayPosition = 0;

    while (iterator->hasNext()) {
        if (array[arrayPosition] != nullptr) {
            if (array[arrayPosition] != iterator->next()->getValue()) {
                return false;
            }
            arrayPosition++;
        } else {
            return false;
        }
    }
    return size == arrayPosition;
}

int main() {
    testList();

    return 0;
}