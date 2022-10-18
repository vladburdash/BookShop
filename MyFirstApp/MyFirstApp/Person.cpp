#include"Person.h"

void Person::getPerson()
{
	cout << "Enter your name: ";
	cin >> Name;
	cout << "Enter your surname: ";
	cin >> Surname;
	cout << "Enter your age: ";
	cin >> Age;
	cout << "Enter your sex: ";
	cin >> Sex;
	cout << "Enter your sex: ";
	cin >> Email;
	cout << "Enter your email: ";
}

void Person::showPerson() {
	cout << "Name: " << Name << endl << "Surname: " << Surname << endl
		<< "Age: " << Age << endl << "Email: " << Email << endl;
}
