#include "Library.h"

Library::Library() {
    books[0] = Book("1", "The Art of Prolog", "Leon Sterling, Ehud Shapiro");
    books[1] = Book("2", "Concrete Mathematics: A Foundation for Computer Science", "Ronald L. Graham, Donald E. Knuth, Oren Patashnik");
    books[2] = Book("3", "The Pattern on the Stone: The Simple Ideas That Make Computers Work", "W. Daniel Hillis");
    books[3] = Book("4", "LISP", "Patrick Henry Winston, Berthold Klaus");
    books[4] = Book("5", "The Practice of Programming", "Brian W. Kernighan, Rob Pike");
}

Book* Library::findBook(string isbn) {
    for (int i = 0; i < SIZE; i++) {
        if (books[i].getISBN() == isbn) {
            return &books[i];
        }
    }
    return nullptr;
}