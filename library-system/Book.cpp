// Book.cpp

#include "Book.h"
#include <iostream>

using namespace std;

Book::Book() {
    title = "";
    author = "";
    isbn = "";
    available = true;
    dateAdd = "";
}

Book::Book(string t, string a, string i, string d) {
    title = t;
    author = a;
    isbn = i;
    available = true;
    dateAdd = d;
}

void Book::setBookDetails(string t, string a, string i, string d) {
    title = t;
    author = a;
    isbn = i;
    dateAdd = d;
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
    cout << "Available: " << (available ? "true" : "false") << endl;
    cout << "DateAdd: " << dateAdd << endl;
}