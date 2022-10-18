#pragma once
using namespace std;
#include"Books.h"
#include <fstream>
#include "Person.h"
//#include "Application.h"


class Reader: public Person{
private: 
	int amountOfMoney;
	int creditCard;
	friend void getMaxMoney(Reader rd1, Reader rd2);
	friend class Discount;
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

	~Reader() {}

	int writeToFile();
	int readFromFile();
	void apply(Book bk);//, Reader rd);
	void getInfo();
	void setInfo();
	string getReaderName();
	string getReaderSurname();
	int getAmountOfMoney();
	void payOrder();
};

class Discount {
	string promocode;
	float newPrice;
public:
	/*Discount(string promo)
	{
		promocode = promo;
	}*/

	void setPromocode(Book bk)
	{
		
		cout << "Do you have promocode? (yes/no)" << endl;
		string answer;
		cin >> answer;
		if (answer == "yes")
		{
			cout << "Enter promocode: ";
			cin >> promocode;
			if (promocode == "Lachen" || "Zinchenko")
			{
				newPrice = (bk.getPrice() * 10.0) / 100.0;
				cout << "New price: " << newPrice << endl;
			}
			else
				cout << "there is no such promo code\n";
		}
		
		
	}
};