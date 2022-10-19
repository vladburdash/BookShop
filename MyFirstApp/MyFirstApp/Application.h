#pragma once
#include <iostream>
#include "Books.h"
#include "Reader.h"
using namespace std;


class Application {
protected:
	string ReaderName;
	string ReaderSurname;
	string BookName;
	string BookAuthor;
	int BookPrice;
	int BookCount;
	Reader* reader;

public:
	Application() {}
	Application(Reader* reader, Book bk)
	{
		//cout << "It's aggregation";
	}
	~Application() {}
	void Create(Reader reader, Book bk);
	void ShowAllApplication();
	void writeApplication();
};
