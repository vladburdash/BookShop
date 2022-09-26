#pragma once
#include <iostream>
using namespace std;

class Book {
	string title;
	string author;
	int price;
public:
	void getBook();
	Book(string title, string author, int price)
	{
		this->title = title;
		this->author = author;
		this->price = price;
	}
};
