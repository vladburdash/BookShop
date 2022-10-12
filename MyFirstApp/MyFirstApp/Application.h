#pragma once
#include <iostream>
#include "Books.h"
#include "Reader.h"
using namespace std;


class Application {
private:
	string ReaderName;
	string ReaderSurname;
	string BookName;
	string BookAuthor;
	int BookPrice;
	int BookCount;
	

public:

	void Create(Reader reader, Book bk);
	void ShowAllApplication();
	void writeApplication();
};
