#pragma once
#include <iostream>
#include "Books.h"
using namespace std;

class BookShop {
private:
	Book anyBook;
	int BooksPrice;
public:
	void calculatePrise();
	void ShowAll();
};

