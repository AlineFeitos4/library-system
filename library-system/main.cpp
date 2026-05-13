// main.cpp

#include <iostream>
#include "HardcopyBook.h"
#include "EBook.h"
#include "Sort.h"

using namespace std;

void displayBooks(Book* books[], int size) {

    for (int i = 0; i < size; i++) {

        books[i]->displayInfo();

        cout << endl;
    }
}

int main() {

    HardcopyBook b1(
        "Clean Code",
        "Robert C. Martin",
        "101",
        "2026-04-14",
        "A1"
    );

    HardcopyBook b4(
        "System Design",
        "Author A",
        "10",
        "2026-04-13",
        "B2"
    );

    EBook b5(
        "Data Structures",
        "Author B",
        "20",
        "2026-04-14",
        "2028-12-31"
    );

    Book b2(
        "",
        "",
        "",
        ""
    );

    Book b3(
        "00000",
        "#####",
        "ERROR_999",
        "??"
    );

    Book b6(
        "",
        "",
        "",
        "??"
    );

    Book* ascending[3];

    ascending[0] = &b4;
    ascending[1] = &b5;
    ascending[2] = &b1;

    Book* descending[3];

    descending[0] = &b1;
    descending[1] = &b5;
    descending[2] = &b4;

    Book* mixed[3];

    mixed[0] = &b5;
    mixed[1] = &b1;
    mixed[2] = &b4;

    bubbleSort(ascending, 3);

    insertionSort(descending, 3);

    quickSort(mixed, 0, 2);

    cout << "Bubble Sort" << endl;

    displayBooks(ascending, 3);

    cout << "Insertion Sort" << endl;

    displayBooks(descending, 3);

    cout << "Quick Sort" << endl;

    displayBooks(mixed, 3);

    return 0;
}