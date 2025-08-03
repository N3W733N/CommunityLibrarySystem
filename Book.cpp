#include "Book.h"

Book::Book() {
    title = "";
    author = "";
    isbn = "";
    available = true;
}

void Book::setBookDetails(std::string t, std::string a, std::string i, bool avail) {
    title = t;
    author = a;
    isbn = i;
    available = avail;
}

void Book::displayBookDetails() const {
    std::cout << "Title: " << title << "\nAuthor: " << author 
              << "\nISBN: " << isbn 
              << "\nAvailability: " << (available ? "Available" : "Not Available") 
              << "\n----------------------\n";
}

bool Book::borrowBook() {
    if (available) {
        available = false;
        return true;
    }
    return false;
}

void Book::returnBook() {
    available = true;
}

std::string Book::getISBN() const {
    return isbn;
}

bool Book::isAvailable() const {
    return available;
}
