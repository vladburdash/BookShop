#include "Reader.h"
#include <string>
#include <iostream>
#include <fstream>

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

void Reader::setInfo() {
	cout << "Name: " << Name << endl << "Surname: " << Surname << endl
		<< "Age: " << Age << endl << "Sex: " << Sex << endl <<
		"Email: " << Email << endl;
}

void Reader::writeToFile(Reader reader1) {

	ofstream input_file("input.txt", ios::app);

	if (input_file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		input_file << "Name: " << Name << endl;
		input_file << "Surname: " << Surname << endl;
		input_file << "Age: " << Age << endl;
		input_file << "Sex: " << Sex << endl;
		input_file << "Email: " << Email << endl;
		//input_file.write((char*)&reader1, sizeof(reader1));
	}
	input_file.close();
}

void Reader::readFromFile(Reader reader2) {

	ifstream result_file("input.txt", ios::in);

	if (result_file.fail())
	{
		cerr << "Error opening file";
	}

	else
	{
		
		/*std::getline(result_file, Name);
		cout << Name << endl;*/
		
		/*while (!result_file.eof()) {
			std::getline(result_file, Name);
			cout << Name << endl;
		}*/
		while (!result_file.eof()) {
		for (std::string line; std::getline(result_file, line); ) {
			if(line == "men")
			std::cout << line << '\n';

		}
		}
	}
	result_file.close();
}

//bool Reader::apply(Application application)
//{
//	return false;
//}

bool Reader::apply(Application application) {
	this->apllications[applicationsCount] = application;
	applicationsCount++;
	return true;
}

void Reader::ShowApl()
{
	for (int i = 0; i < applicationsCount; i++)
	{
		cout << "Order: " << endl;
		cout << "Name: " << Name << endl;
		cout << "Surname: " << Surname << endl;
		apllications[i].ShowApplication();
	}
}

// application

