#include <iostream>
#include "Book.h"

int main() {
    Book library[5];

    // Initialize 5 books
    library[0].setBookDetails("The Hobbit", "J.R.R. Tolkien", "001");
    library[1].setBookDetails("1984", "George Orwell", "002");
    library[2].setBookDetails("To Kill a Mockingbird", "Harper Lee", "003");
    library[3].setBookDetails("Pride and Prejudice", "Jane Austen", "004");
    library[4].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", "005");

    std::string inputISBN;

    while (true) {
        std::cout << "\nEnter ISBN to borrow a book (0 to exit): ";
        std::cin >> inputISBN;

        if (inputISBN == "0") {
            std::cout << "Exiting program.\n";
            break;
        }

        bool found = false;
        for (int i = 0; i < 5; ++i) {
            if (library[i].getISBN() == inputISBN) {
                found = true;
                if (library[i].isAvailable()) {
                    library[i].borrowBook();
                    std::cout << "Book borrowed successfully:\n";
                    library[i].displayBookDetails();
                } else {
                    std::cout << "Sorry, this book is already borrowed.\n";
                }
                break;
            }
        }

        if (!found) {
            std::cout << "Book with ISBN " << inputISBN << " not found.\n";
        }
    }

    return 0;
}
