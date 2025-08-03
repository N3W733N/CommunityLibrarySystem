#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;

public:
    Book();
    void setBookDetails(std::string t, std::string a, std::string i, bool avail = true);
    void displayBookDetails() const;
    bool borrowBook();
    void returnBook();
    std::string getISBN() const;
    bool isAvailable() const;
};

#endif
