#include "Reader.h"
#include "Books.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Application.h"


void Reader::getStudent() {
	cout << "Enter your name: ";
	cin >> Name;
	cout << "Enter your surname: ";
	cin >> Surname;
	cout << "Enter your age: ";
	cin >> Age;
	cout << "Enter your sex: ";
	cin >> Sex;
	cout << "Enter your email: ";
	cin >> Email;
}


string Reader::getReaderName()
{
	return Name;
}


string Reader::getReaderSurname()
{
	return Surname;
}

int Reader::getAmountOfMoney()
{
	return amountOfMoney;
}


void Reader::setStudent() {
	cout << "Name: " << Name << endl << "Surname: " << Surname << endl
		<< "Age: " << Age << endl << "Sex: " << Sex << endl <<
		"Email: " << Email << endl;
}

int Reader::writeToFile() {

	ofstream input_file("readers.txt", ios::app);
	if (input_file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		// write to file
		input_file << "\n" << Name << endl;
		input_file << Surname << endl;
		input_file << Age << endl;
		input_file << Sex << endl;
		input_file << Email << endl;
	}
	input_file.close();
	return 0;
}

int Reader::readFromFile() {

	ifstream result_file("readers.txt");
	if (result_file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		while ((!result_file.eof())) {
			result_file >> Name;
			result_file >> Surname;
			result_file >> Age;
			result_file >> Sex;
			result_file >> Email;
			cout << Name << endl;
			cout << Surname << endl;
			cout << Age << endl;
			cout << Sex << endl;
			cout << Email << endl;
		}
	}

	result_file.close();
	return 0;
}

// method apply an application
void Reader::apply(Book bk)
{

	int ReaderBookID = 0, ReaderCountOfBooks = 0, bookID = 0, price = 0, NumberOfCopies;
	string title;
	string author;
	cout << "\nBUY BOOK:\n";
	cout << "\nEnter bookID: ";
	cin >> ReaderBookID;
	cout << "\nEnter count of book you want to buy: ";
	cin >> ReaderCountOfBooks;
	ifstream fp("book.txt");
	if (fp.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		// until the end of the file
		while ((!fp.eof()))
		{
			// read from file
			fp >> bookID;
			fp >> title;
			fp >> author;
			fp >> price;
			fp >> NumberOfCopies;
			// get bookID, name of book and author of book
			bk.getInfo(bookID, title, author);

			// if haven't book to buy
			if (ReaderBookID == bookID & NumberOfCopies < ReaderCountOfBooks)
			{
				//system("cls");
				cout << "There are not so many books" << endl;
				break;
			}

			// if bookID from file = bopkID from console
			if (ReaderBookID == bookID)
			{
				//system("cls");
				cout << "\t\n-----Your order-----\n\n";
				cout << "Title of book: " << title << endl;
				cout << "Author of book: " << author << endl;
				cout << "Price: " << price << " uah" << endl;
				cout << "Count of books: " << ReaderCountOfBooks << endl;
				
				ofstream file("book_title_author.txt");

				if (file.fail())
				{
					cerr << "Error opening file";
				}

				else
				{
					file << title << endl;
					file << author << endl;
					file << price << endl;
					file << ReaderCountOfBooks << endl;
				}

				break;
				file.close();
			}
			
		}
		// if book doesn't exist
		if (fp.eof() || ReaderBookID != bookID)
		{
			//system("cls");
			cout << "Book not found" << endl;
			//exit(1);
		}
	}

	fp.close();
}

// method to pay order 
void Reader::payOrder()
{
	//Application tmp;
	string ReaderName;
	string ReaderSurname;
	string BookName;
	string BookAuthor;
	int BookPrice;
	int BookCount;
	cout << "Enter your name: ";
	cin >> Name;
	cout << "Enter your Surname: ";
	cin >> Surname;

	ifstream file("book_orders.txt");

	if (file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		while (!file.eof())
		{
			file >> ReaderName;
			file >> ReaderSurname;
			file >> BookName;
			file >> BookAuthor;
			file >> BookPrice;
			file >> BookCount;
			// if Name from console = Name from file and Surname from console = Surname
			if (Name == ReaderName & Surname == ReaderSurname)
			{
				cout << "-----Your order------";
				cout << "\nOrder book name: " << BookName << endl;
				cout << "Order book author: " << BookAuthor << endl;
				cout << "Order book price: " << BookPrice << endl;
				cout << "Order book count: " << BookCount << endl;
				cout << "Enter your credit card: ";
				cin >> creditCard;
				// if Reader's count of money greater than price of book's
				if (amountOfMoney > BookCount * BookPrice)
				{
					// decrease Reader's count of money for the amount of books he bought
					amountOfMoney -= BookCount * BookPrice;
					cout << "\nSuccessfully paid\n";

				}
				else
				{
					cout << "Don't enough money" << endl;
				}
				break;
			}

		}
		// if end of file and Name from console not = Name from file and Surname from console not = Surname
		if (file.eof() & (Name != ReaderName || Surname != ReaderSurname))
		{
			cout << "Order wasn't find" << endl;
		}
	}
	file.close();
}


