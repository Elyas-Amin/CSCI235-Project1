#include "Book.hpp"


Book::Book() {
    title = "";
    author = "";
    page_count = 0;
    available = false;
}

Book::Book(const string& title_, const string& author_, const int page_count_, const bool available_) {
    title = title_;
    author = author_; 
    page_count = page_count_;
    available = available_;
}

void Book::setTitle(const string& title_) {
    title=title_;
}
string Book::getTitle() const {
    return title;
}

void Book::setAuthor(const string& author_) {
    author = author_;
}
string Book::getAuthor() const {
    return author;
}

void Book::setPageCount(const int page_count_) {
    if (page_count_>0) {
        page_count = page_count_;
    }
}
int Book::getPageCount() const {
    return page_count;
}

void Book::setDigital() {
    available = true;
}
bool Book::isDigital() const {
    return available;
}
