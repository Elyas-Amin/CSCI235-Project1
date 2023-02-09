#pragma once

#include <iostream>
#include <string>

using namespace std;

class Book {
public:


private:
    string title;
    string author;
    int page_count;
    bool available;

public:

    Book();
    Book(const string& title_, const string& author_, const int page_count_, const bool available_ = false);
    
    void setTitle(const string& title_);
    string getTitle() const;

    void setAuthor(const string& author_);
    string getAuthor() const;

    void setPageCount(const int page_count_);
    int getPageCount() const;

    void setDigital();
    bool isDigital() const;
};
