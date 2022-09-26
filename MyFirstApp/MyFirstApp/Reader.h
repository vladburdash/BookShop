#pragma once
using namespace std;

#include <fstream>
#include "Application.h"


class Reader {
private: 
	string Name;
	string Surname;
	int Age;
	string Sex;
	string Email;
	Application apllications[10];
	int applicationsCount = 0;
public: 
	//Reader();
	void writeToFile(Reader reader1);
	void readFromFile(Reader reader2);
	bool apply(Application application);
	void ShowApl();
	void getInfo();
	void setInfo();
};

