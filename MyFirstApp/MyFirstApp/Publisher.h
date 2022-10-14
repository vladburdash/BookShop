#pragma once
#include"Reader.h"
#include"Books.h"
using namespace std;
#include <fstream>
class Publisher
{
private:
	string publisherName;
	Reader* reader;
	Book* book;
	//const int ISBN;
	//int& telephone;
	
public:

	Publisher(Reader* rd, Book* bk, string PubName) :
		reader(rd), book(bk), publisherName() {};

	// constructor with init list

	//Publisher(int i, int&j) : ISBN(ISBN), telephone(telephone) {}


	~Publisher()
	{

	}
};
