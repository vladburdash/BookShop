#include "Reader.h"
#include "Books.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

//Reader::Reader() {
//
//}

void Reader::getInfo() {
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

void Reader::setInfo() {
	cout << "Name: " << Name << endl << "Surname: " << Surname << endl
		<< "Age: " << Age << endl << "Sex: " << Sex << endl <<
		"Email: " << Email << endl;
}

int Reader::writeToFile() {

	ofstream input_file("start.txt", ios::app);
	if (input_file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{

		input_file << Name << endl;
		input_file << Surname << endl;
		input_file << Age << endl;
		input_file << Sex << endl;
		input_file << Email << endl;


		//input_file.write(reinterpret_cast<char*>(&reader1), sizeof(Reader));
	}
	input_file.close();
	return 0;
}

int Reader::readFromFile() {

	ifstream result_file("start.txt");
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
		while ((!fp.eof()))
		{
			fp >> bookID;
			fp >> title;
			fp >> author;
			fp >> price;
			fp >> NumberOfCopies;
			bk.getInfo(bookID, title, author);

			if (ReaderBookID == bookID & NumberOfCopies < ReaderCountOfBooks)
			{
				//system("cls");
				cout << "There are not so many books" << endl;
				break;
			}

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
		if (fp.eof() || ReaderBookID != bookID)
		{
			//system("cls");
			cout << "Book not found" << endl;
			//exit(1);
		}
	}

	fp.close();
}

void Reader::payOrder()
{
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

			if (Name == ReaderName & Surname == ReaderSurname)
			{
				cout << "-----Your order------";
				cout << "\nOrder book name: " << BookName << endl;
				cout << "Order book author: " << BookAuthor << endl;
				cout << "Order book price: " << BookPrice << endl;
				cout << "Order book count: " << BookCount << endl;
				cout << "Enter your credit card: ";
				cin >> creditCard;
				if (amountOfMoney > BookCount * BookPrice)
				{
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
		if (file.eof() & (Name != ReaderName || Surname != ReaderSurname))
		{
			cout << "Order wasn't find" << endl;
		}
	}
	file.close();
}


//bool Reader::apply(Application application) {
//	this->apllications[applicationsCount] = application;
//	applicationsCount++;
//	return true;
//}
//
//void Reader::ShowApl()
//{
//	for (int i = 0; i < applicationsCount; i++)
//	{
//		cout << "Order: " << endl;
//		cout << "Name: " << Name << endl;
//		cout << "Surname: " << Surname << endl;
//		apllications[i].ShowApplication();
//	}
//}

// application

