#pragma once
#include <iostream>
#include "Books.h"
#include "Reader.h"
using namespace std;

class BookShop: public Reader, public Book {
private:
	Book anyBook;
	int BooksPrice;
public:
	BookShop() {}
	void calculatePrise();
	void ShowBookShop();
};

template <typename T> class Partner {
private:
	T Country;
	T Name;
	T Chief;
	T Ownership;
	T legalForm;
public:
	Partner(){}
	Partner(T country) : Country(country) {}
	Partner(T country, T name, T chief, T ownership, T legalform) : Country(country),
		Name(name), Chief(chief), Ownership(ownership), legalForm(legalform) {}
	

	T getCountry()
	{
		return Country;
	}

	T getName()
	{
		return Name;
	}

	T getChief()
	{
		return Chief;
	}

	T getOwnership()
	{
		return Ownership;
	}

	T getlegalForm()
	{
		return legalForm;
	}

	/*void showPartner()
	{
		cout << "Name: " << Name << endl;
		cout << "Country: " << Country << endl;
		cout << "Chief: " << Chief << endl;
		cout << "Ownership: " << Ownership << endl;
		cout << "Legal Form: " << legalForm << endl;
	}*/
	~Partner(){}
};