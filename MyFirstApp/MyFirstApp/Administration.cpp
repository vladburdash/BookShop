#include<iostream>
#include "Administration.h"
#include "Person.h"

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