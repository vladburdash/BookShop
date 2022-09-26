#pragma once
#include <iostream>
#include "Books.h"
using namespace std;

class BookShop {
	Book books[20];
	int BooksCount = 0;
public:
	void AddBook();
	void ShowAll();
};

