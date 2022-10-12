#include "Application.h"
#include "Books.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include<conio.h>
void Application::Create(Reader reader, Book bk) {
	
	//bk->getInfo(bookid, title, author);
	//Book newBook = Book(title, author, bookid);
	
	ReaderName = reader.getReaderName();
	ReaderSurname = reader.getReaderSurname();
	ifstream file("book_title_author.txt");
	if (file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		file >> BookName;
		file >> BookAuthor;
		file >> BookPrice;
		file >> BookCount;
	}
	file.close();
	/*cout << "name :" << ReaderName << endl << "Surname : " << ReaderSurname << endl;
	cout << "Book :" << BookName << endl << "Author : " << BookAuthor;*/
}

void Application::ShowAllApplication() {
	ifstream fp("book_orders.txt");
	if (fp.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		cout << setw(60) <<"ORDER LIST\n\n";
		cout << "=====================================================================================================================\n";
		cout << "Reader Name" << setw(20) << "Reader Surname" << setw(20) << "Title" << setw(20) << "Author" << setw(23) << "Prise" << setw(20) << "Count" << endl;
		cout << "=====================================================================================================================\n";

		int i = 0;

		while (!fp.eof())
		{
			fp >> ReaderName;
			fp >> ReaderSurname;
			fp >> BookName;
			fp >> BookAuthor;
			fp >> BookPrice;
			fp >> BookCount;

			cout << ReaderName << setw(25) << ReaderSurname << setw(25) << BookName
				<< setw(20) << BookAuthor << setw(20) << BookPrice << setw(20)
				<< BookCount << endl;
		}
	}
	fp.close();
}

void Application::writeApplication()
{
	ofstream file("book_orders.txt", ios::app);
	if (file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		file << "\n" << ReaderName << endl;
		file << ReaderSurname << endl;
		file << BookName << endl;
		file << BookAuthor << endl;
		file << BookPrice << endl;
		file << BookCount;
	}
	file.close();
}