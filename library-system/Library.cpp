#include "Library.h"
#include "HardcopyBook.h"
#include "EBook.h"

Library::Library() {

    books[0] = new HardcopyBook("101", "Clean Code", "Robert C. Martin", "2026-04-14", "A1");
    books[1] = new HardcopyBook("10", "System Design", "Author A", "2026-04-13", "B2");
    books[2] = new EBook("20", "Data Structures", "Author B", "2026-04-14", "2028-12-31");
    books[3] = new HardcopyBook("30", "Algorithms", "Author C", "2026-04-12", "C3");
    books[4] = new EBook("40", "Programming", "Author D", "2026-04-11", "2027-06-30");
}

Book* Library::findBook(string isbn) {

    for (int i = 0; i < SIZE; i++) {
        if (books[i]->getISBN() == isbn) {
            return books[i];
        }
    }

    return nullptr;
}