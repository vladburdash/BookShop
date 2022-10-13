#pragma once
#include"Reader.h"
#include"Books.h"
using namespace std;
#include <fstream>
class Publisher
{
private:
	string *publisherName;
	string *readerName;
	string *bookName;
	static unsigned int index;
	static Publisher* publisherList[3];
public:
	/*Publisher(string *ReaderName, string *BookName, string PublisherName) :
		readerName(ReaderName), bookName(BookName), publisherName(PublisherName)
	{
		if (index < 5)
		{
			publisherName = PublisherName;
			publisherList[index] = this;
			++index;
		}
		else
		{
			cout << "Too much Publishers" << endl;
		}
		
	};*/
	Publisher(string *ReaderName, string *BookName, string *PublisherName) /*:
		readerName(ReaderName), bookName(BookName), publisherName(PublisherName)*/
	{
		readerName = ReaderName;
		bookName = BookName;
		publisherName = PublisherName;
	};
	~Publisher()
	{
		cout << "Publisher is deleted" << endl;
	}
};
