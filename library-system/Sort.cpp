// Sort.cpp

#include "Sort.h"

void bubbleSort(Book* books[], int size) {

    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - i - 1; j++) {

            if (
                books[j]->getISBN() >
                books[j + 1]->getISBN()
                ) {

                Book* temp = books[j];

                books[j] = books[j + 1];

                books[j + 1] = temp;
            }
        }
    }
}

void insertionSort(Book* books[], int size) {

    for (int i = 1; i < size; i++) {

        Book* key = books[i];

        int j = i - 1;

        while (
            j >= 0 &&
            books[j]->getISBN() >
            key->getISBN()
            ) {

            books[j + 1] = books[j];

            j--;
        }

        books[j + 1] = key;
    }
}

int partition(Book* books[], int low, int high) {

    Book* pivot = books[high];

    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (
            books[j]->getISBN() <
            pivot->getISBN()
            ) {

            i++;

            Book* temp = books[i];

            books[i] = books[j];

            books[j] = temp;
        }
    }

    Book* temp = books[i + 1];

    books[i + 1] = books[high];

    books[high] = temp;

    return i + 1;
}

void quickSort(Book* books[], int low, int high) {

    if (low < high) {

        int pi =
            partition(books, low, high);

        quickSort(books, low, pi - 1);

        quickSort(books, pi + 1, high);
    }
}