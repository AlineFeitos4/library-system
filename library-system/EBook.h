// EBook.h

#pragma once
#include "Book.h"

class EBook : public Book {
private:
    string licenseEndDate;

public:
    EBook();

    EBook(
        string t,
        string a,
        string i,
        string d,
        string l
    );

    string getLicenseEndDate();
};