#pragma once
#include<iostream>
#include "Person.h"

using namespace std;
class Administration : private Person
{
private:
	int accessCode;
public:
	Administration(string adminName, string adminSurname)
	{
		Name = adminName;
		Surname = adminSurname;
	}
	void getAdmin(); 
	void getAccessCode();
	void addApplToBlackList();
};