#include "Books.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include<conio.h>
void Book::getBookDetails()
{
	cout << "\nENTER DETAILS ABOUT BOOK U WANT TO ADD\n";
	cout << "\nEnter The Book ID: ";
	cin >> bookID;
	cout << "\nEnter The Name of The Book: ";
	cin.ignore();
	cin >> bookName;
	cout << "\nEnter The Author's Name: ";
	cin.ignore();
	cin >> authorName;
	cout << "\nEnter The Price of The Book: ";
	cin.ignore();
	cin >> price;
	fflush(stdin);
	cout << "\nEnter No. Of Copies : ";
	cin >> numCopies;
}

void Book::setBook()
{
	cout << "Book ID: " << bookID << endl;
	cout << "Title of book: " << bookName << endl;
	cout << "Author of book: " << authorName << endl;
	cout << "Price of book: " << price << endl;
	cout << "Count of book: " << numCopies << endl;

}


void Book::writeBook(Book bk, int current, int count) {
	ofstream fp("book.txt", ios::app);
	if (fp.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		// write to file
		fp << "\n" << bookID << endl;
		fp << bookName << endl;
		fp << authorName << endl;
		fp << price << endl;
		if (current == count)
		{
			fp << numCopies;
		}
		else
		{
			fp << numCopies << endl;
		}

	}

	fp.close();
}

void Book::readBook(Book bk)
{
	ifstream fp("book.txt");

	if (fp.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		int i = 0;
		do
		{
			// read from file
			fp >> bookID;
			fp >> bookName;
			fp >> authorName;
			fp >> price;
			fp >> numCopies;
			// output to the console
			cout << "\nBook ID: " << bookID;
			cout << "\nBook Name: " << bookName;
			cout << "\nAuthor's Name: " << authorName;
			cout << "\nPrice : " << price;
			cout << "\nCopies : " << numCopies;
			i++;
		} while (!fp.eof());
	}
	fp.close();
}



void Book::showAllBooks(Book bk)
{
	ifstream fp("book.txt");
	if (fp.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		cout << "\n\n\t\tBook LIST\n\n";
		cout << "===============================================================================================================\n";
		cout << "Book Number" << setw(25) << "Book Name" << setw(25) << "Author" << setw(25) << "Price" << setw(25) << "Copies" << endl;
		cout << "===============================================================================================================\n";

		int i = 0;
		// until the end of the file 
		while (!fp.eof())
		{
			fp >> bookID;
			fp >> bookName;
			fp >> authorName;
			fp >> price;
			fp >> numCopies;

			cout << bookID << setw(30) << bookName << setw(30) << authorName << setw(25) << price << setw(25) << numCopies << endl;
		}
	}
	fp.close();
}

void Book::getInfo(int bkID, string BookName, string AuthorName)
{
	bookID = bkID;
	bookName = BookName;
	authorName = AuthorName;
}

int Book::getPrice()
{
	return price;
}

int Book::getCount()
{
	return numCopies;
}
