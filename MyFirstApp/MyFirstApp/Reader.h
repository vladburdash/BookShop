#pragma once
using namespace std;
#include"Books.h"
#include <fstream>
//#include "Application.h"


class Reader{
private: 
	string Name;
	string Surname;
	int Age;
	string Sex;
	string Email;
	int amountOfMoney;
	int creditCard;
	//Application apllications[10];
	//int applicationsCount = 0;
public: 
	
	
	Reader()
	{
		cout << "It's constructor without parametres;";
	}

	Reader(const Reader& readerAge)
	{
		Age = readerAge.Age;
		cout << "It's copy constructer";
	}

	Reader(int myMoney)
	{
		amountOfMoney = myMoney;
	}

	Reader(string Name)
	{
		string* ptr;
		ptr = new string;
		*ptr = Name;
	}
	int writeToFile();
	int readFromFile();
	void apply(Book bk); 
	void getInfo();
	void setInfo();
	string getReaderName();
	string getReaderSurname();
	void payOrder();
};

