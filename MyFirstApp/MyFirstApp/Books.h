#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Book {
private:
	int bookID;
	string bookName;
	string authorName;
	int price, numCopies;
	friend class TypeOfBook;
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

	~Book()
	{
		//cout << "\nDestructor executed\n"; 
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

class TypeOfBook {
private:
	string type;
public:
	TypeOfBook(string Type, Book bk)
	{
		type = Type;
	}

	void display(Book bk)
	{
		bk.getBookDetails();
		cout << "\nType of book: " << type << endl;
		cout << "Book :" << bk.bookName << endl;
		cout << "Author :" << bk.authorName << endl;
		cout << "Price :" << bk.price << endl;
		cout << "Count :" << bk.numCopies << endl;
	}

};