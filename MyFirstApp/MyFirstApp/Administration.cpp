#include<iostream>
#include "Administration.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include<conio.h>
#include "Books.h"
using namespace std;

void Administration::getAdmin() {
	cout << Name << endl;
	cout << Surname << endl;
}

void Administration::getAccessCode()
{
	cout << "Enter password: ";
	cin >> accessCode;
	if (accessCode == 1111)
		cout << "You are welcome\n";
	else
		cout << "Invalid password\n";
}

void Administration::addApplToBlackList()
{
	string ReaderName;
	string ReaderSurname;
	string BookName;
	string BookAuthor;
	int BookPrice;
	int BookCount;
	string answer;
	cout << "\n\nEnter The Reader's Surname To Delete Application: ";
	cin >> answer;
	ifstream fp("book_orders.txt");
	if (fp.fail())
	{
		cerr << "Error opening file";
	}

	ofstream tmp("tmp.txt");
	if (tmp.fail())
	{
		cerr << "Error opening file";
	}
	ofstream blackList("BlackList.txt", ios::app);
	if (blackList.fail())
	{
		cerr << "Error opening file";
	}
	while (!fp.eof())
	{

		fp >> ReaderName;
		fp >> ReaderSurname;
		fp >> BookName;
		fp >> BookAuthor;
		fp >> BookPrice;
		fp >> BookCount;
		if (fp.eof() & ReaderSurname != answer)
		{
			cout << "Application doesn't exist";
			break;
		}
		if (ReaderSurname == answer)
		{
			blackList << "\n" << ReaderName << endl;
			blackList << ReaderSurname << endl;
			blackList << BookName << endl;
			blackList << BookAuthor << endl;
			blackList << BookPrice << endl;
			blackList << BookCount;
		}
		else
		{
			tmp << "\n" << ReaderName << endl;
			tmp << ReaderSurname << endl;
			tmp << BookName << endl;
			tmp << BookAuthor << endl;
			tmp << BookPrice << endl;
			tmp << BookCount;
		}
	}

	
	fp.close();
	tmp.close();
	blackList.close();
	remove("book_orders.txt");
	rename("tmp.txt", "book_orders.txt");

}