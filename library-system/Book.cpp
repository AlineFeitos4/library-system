#include "Book.h"
#include <iostream>

using namespace std;

Book::Book() {
    isbn = "";
    title = "";
    author = "";
    available = true;
}

Book::Book(string i, string t, string a) {
    isbn = i;
    title = t;
    author = a;
    available = true;
}

string Book::getISBN() {
    return isbn;
}

bool Book::isAvailable() {
    return available;
}

void Book::borrowBook() {
    if (available) {
        available = false;
    }
}

void Book::returnBook() {
    available = true;
}

void Book::displayInfo() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Status: " << (available ? "Available" : "Unavailable") << endl;
}