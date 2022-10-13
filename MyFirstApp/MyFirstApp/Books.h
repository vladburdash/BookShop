#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Book {
public:
	int bookID;
	string bookName;
	string authorName;
	int price, numCopies;

public:
	
	Book(string BookName)
	{
		string* ptr;
		ptr = new string;
		*ptr = BookName;
	}
	Book()
	{
		string* ptr;
		ptr = new string;
	}
	void setBook();
	void getBookDetails();
	void writeBook(Book bk, int current, int count);
	void readBook(Book bk);
	void showAllBooks(Book book);
	void getInfo(int bkID, string BookName, string AuthorName);
	int getPrice();
	int getCount();
};
