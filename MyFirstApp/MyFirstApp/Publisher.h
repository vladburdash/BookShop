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
	// static data field
	static int publisherIndex;
	//const int ISBN;
	//int& telephone;
	//int Publisher::publsiherIndex;
public:
	void setPublisherIndex(int PubIndex)
	{
		publisherIndex = PubIndex;
	}

	// static method
	static void getPublisherIndex() {
		cout << publisherIndex;
	}
	Publisher(Reader* rd, Book* bk, string PubName) :
		reader(rd), book(bk), publisherName() {};

	
	// constructor with init list

	//Publisher(int i, int&j) : ISBN(ISBN), telephone(telephone) {}


	~Publisher()
	{

	}
};
