#pragma once
#include <string>

using namespace std;

class Book;

class User {
private:
    string name;

public:
    User();
    User(string n);

    string getName();

    void borrowBook(Book* book);
    void returnBook(Book* book);
};