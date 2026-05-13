// EBook.cpp

#include "EBook.h"

EBook::EBook()
    : Book() {

    licenseEndDate = "";
}

EBook::EBook(
    string t,
    string a,
    string i,
    string d,
    string l
)
    : Book(t, a, i, d) {

    licenseEndDate = l;
}

string EBook::getLicenseEndDate() {
    return licenseEndDate;
}