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
    Book(string title, string author, int page_count, bool available);
    
    void setTitle(string title);
    string getTitle();

    void setAuthor(string author);
    string getAuthor();

    void setPageCount(int page_count);
    int getPageCount();

    void setDigital();
    bool isDigital();
};
