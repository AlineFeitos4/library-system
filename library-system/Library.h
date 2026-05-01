#pragma once
#include "Book.h"

class Library {
private:
    static const int SIZE = 5;
    Book books[SIZE];

public:
    Library();
    Book* findBook(string isbn);
};