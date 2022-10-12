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
	//int count_of_readers = 0;
	Reader(int myMoney)
	{
		amountOfMoney = myMoney;
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

