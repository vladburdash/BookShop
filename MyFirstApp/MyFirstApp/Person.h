#pragma once
#include<iostream>
using namespace std;
class Person
{
protected:
	string Name;
	string Surname;
	int Age;
	string Sex;
	string Email;
public:
	Person() {}
	Person(string Name, string Surname, int Age, string Sex, string Email)
	{
		this->Name = Name;
		this->Surname = Surname;
		this->Age = Age;
		this->Sex = Sex;
		this->Email = Email;
	}
	

	void showPerson();
	void getPerson();
	

	
	~Person(){}
};

class Employee {
protected:
	int Salary;
	string Company;
public:
	Employee(){}
	Employee(int salary, string company)
	{
		Salary = salary;
		Company = company;
	}
	void showEmployee()
	{
		cout << "Salary: " << Salary << " uah" << endl;
		cout << "Company: " << Company << endl;
	}
	~Employee(){}
};



class Accountant: public Person, public Employee {
private:
	string accountantSoftware;
public:
	Accountant(string AccountantSoftware)
	{
		accountantSoftware = AccountantSoftware;

	}

	Accountant(string AccountantSoftware, string Name, string Surname,
		int Age, string Sex, string Email, int salary, string company):
		Person(Name, Surname, Age, Sex, Email),
		Employee(salary, company) 
	{
		accountantSoftware = AccountantSoftware;
	}
	void showAccountant()
	{
		cout << "Soft: " << accountantSoftware << endl;
		showPerson();
		showEmployee();

	}
	~Accountant(){}
};
