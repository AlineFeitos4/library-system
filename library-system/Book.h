// Book.h

#pragma once
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;
    string dateAdd;

public:
    Book();
    Book(string t, string a, string i, string d);

    void setBookDetails(string t, string a, string i, string d);

    string getISBN();
    bool isAvailable();

    void borrowBook();
    void returnBook();

    virtual void displayInfo();

    virtual ~Book() {}
};