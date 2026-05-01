#include <iostream>
#include "Library.h"
#include "User.h"

using namespace std;

int main() {

    Library library;
    User user("Aline");

    string input;
    int option;

    while (true) {

        cout << "\n1 - Borrow Book\n2 - Return Book\n0 - Exit\nChoose: ";
        cin >> option;

        if (option == 0) break;

        cout << "Enter ISBN: ";
        cin >> input;

        Book* found = library.findBook(input);

        if (!found) {
            cout << "Book not found\n";
            continue;
        }

        if (option == 1) {
            user.borrowBook(found);
        }

        if (option == 2) {
            user.returnBook(found);
        }

        found->displayInfo();
    }

    return 0;
}