#pragma once
using namespace std;
#include"Books.h"
#include <fstream>
#include "Person.h"

// simple inheritance
class Reader: public Person{
private: 
	int amountOfMoney;
	long int creditCard;
	friend void getMaxMoney(Reader rd1, Reader rd2);
public: 
	
	Reader()
	{
		//cout << "It's constructor without parametres;";
	}

	//Reader(const Reader& readerAge)
	//{
	//	Age = readerAge.Age;
	//	//cout << "It's copy constructer";
	//}

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

	Reader(string Name, string Surname, int Age, string Sex, 
		string Email, int amountOfMoney, int creditCard)
	{
		this->Name = Name;
		this->Surname = Surname;
		this->Age = Age;
		this->Sex = Sex;
		this->Email = Email;
		this->amountOfMoney = amountOfMoney;
		this->creditCard = creditCard;
	}

	Reader(int AmountOfMoney, int CreditCard) {
		amountOfMoney = AmountOfMoney;
		creditCard = CreditCard;
	}

	Reader operator +(Reader obj)
	{
		Reader tmp;
		tmp.amountOfMoney = amountOfMoney + obj.amountOfMoney;
		tmp.creditCard = creditCard + obj.creditCard;
		return tmp;
	}
	void show()
	{
		cout << "amountOfMoney: " << amountOfMoney << endl;
		cout << "creditCard: " << creditCard << endl;
	}

	~Reader() {}

	int writeToFile();
	int readFromFile();
	void apply(Book bk);//, Reader rd);
	void getStudent();
	void setStudent();
	string getReaderName();
	string getReaderSurname();
	int getAmountOfMoney();
	void payOrder();
};


