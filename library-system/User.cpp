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

void User::borrowBook(Book* book) {

    if (book && book->isAvailable()) {
        book->borrowBook();
        cout << "Book borrowed\n";
    }
    else {
        cout << "Book not available\n";
    }
}

void User::returnBook(Book* book) {

    if (book) {
        book->returnBook();
        cout << "Book returned\n";
    }
}