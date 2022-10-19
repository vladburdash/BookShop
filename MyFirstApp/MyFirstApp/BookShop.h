#pragma once
#include <iostream>
#include "Books.h"
#include "Reader.h"
using namespace std;

class BookShop: public Reader, public Book {
private:
	Book anyBook;
	int BooksPrice;
public:
	BookShop() {}
	void calculatePrise();
	void ShowBookShop();
};

