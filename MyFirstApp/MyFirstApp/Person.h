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
	// template function

	template <class Person> void print(Person& e1, Person& e2)
	{
		cout << "Name: " << e1 << endl;
		cout << "Surname: " << e2 << endl;
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

	Employee(int salary)
	{
		Salary = salary;
	}

	// overloading unary operator

	Employee operator -()
	{
		Salary --;
		return Employee(Salary);
	}

	Employee operator *()
	{
		Salary += 3500;
		cout << Salary << endl;
		Salary *= 2;
		cout << Salary << endl;
		Salary -= 1000;
		cout << Salary << endl;
		return Employee(Salary);
	}

	Employee operator +()
	{
		++Salary;
		return Employee(Salary);
	}

	// overloading binary operator

	Employee operator +(Employee& e2)
	{
		Employee emp3;
		emp3.Salary = this->Salary + e2.Salary;
		return emp3;
	}

	Employee operator -(Employee& e2)
	{
		Employee emp3;
		emp3.Salary = this->Salary - e2.Salary;
		return emp3;
	}

	void showEmployeeSalary()
	{
		cout << "Salary: " << Salary << " uah" << endl;
	}

	// method to show employee
	void showEmployee()
	{
		cout << "Salary: " << Salary << " uah" << endl;
		cout << "Company: " << Company << endl;
	}
	
	~Employee(){}
};


// multilevel inheritance
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


template<class Ñourier> void showCourier(Ñourier& c)
{
	cout << "Courier: " << c << endl;
}