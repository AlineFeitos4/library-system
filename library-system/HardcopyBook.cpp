// HardcopyBook.cpp

#include "HardcopyBook.h"

HardcopyBook::HardcopyBook()
    : Book() {

    shelfNumber = "";
}

HardcopyBook::HardcopyBook(
    string t,
    string a,
    string i,
    string d,
    string s
)
    : Book(t, a, i, d) {

    shelfNumber = s;
}

string HardcopyBook::getShelfNumber() {
    return shelfNumber;
}