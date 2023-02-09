#include "Book.hpp"


Book::Book() {
    title = "";
    author = "";
    page_count = 0;
    available = false;
}

Book::Book(string title, string author, int page_count, bool available) {
    this->title = title;
    this->author = author; 
    if (page_count > 0) {
        this->page_count = page_count;
    }
    this->available = available;
}

void Book::setTitle(string title) {
    this->title=title;
}
string Book::getTitle() {
    return title;
}

void Book::setAuthor(string author) {
    this->author = author;
}
string Book::getAuthor() {
    return author;
}

void Book::setPageCount(int page_count) {
    this->page_count = page_count;
}
int Book::getPageCount() {
    return page_count;
}

void Book::setDigital() {
    available = true;
}
bool Book::isDigital() {
    return available;
}
