#include "User.h"
#include "Book.h"
#include <iostream>

using namespace std;

User::User() {
    name = "";
}

User::User(string n) {
    name = n;
}

string User::getName() {
    return name;
}

void User::borrowBook(Book* book) {
    if (book != nullptr) {
        if (book->isAvailable()) {
            book->borrowBook();
            cout << name << " borrowed the book.\n";
        }
        else {
            cout << "Book not available.\n";
        }
    }
}

void User::returnBook(Book* book) {
    if (book != nullptr) {
        book->returnBook();
        cout << name << " returned the book.\n";
    }
}