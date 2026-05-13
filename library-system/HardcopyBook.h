// HardcopyBook.h

#pragma once
#include "Book.h"

class HardcopyBook : public Book {
private:
    string shelfNumber;

public:
    HardcopyBook();
    HardcopyBook(
        string t,
        string a,
        string i,
        string d,
        string s
    );

    string getShelfNumber();
};