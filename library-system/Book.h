#pragma once
#include <string>
using namespace std;

class Book {
private:
    string isbn;
    string title;
    string author;
    bool available;

public:
    Book();
    Book(string i, string t, string a);

    string getISBN();
    bool isAvailable();

    void borrowBook();
    void returnBook();
    void displayInfo();
};