
#include <iostream>
#include <fstream>

#include "Reader.h"
#include "BookShop.h"
#include "Books.h"

using namespace std;

int main()

{
	int count_of_readers = 0;
	cout << count_of_readers;
	Reader reader1;
	Application application1;
	BookShop newBook = newBook;

	Reader readers[20];
	int* ptr;
	ptr = new int(count_of_readers);
	
	/*cout << "Enter count of readers: ";
	cin >> count_of_readers;*/
	
	//dynamic array

	/*for (int i = 0; i < count_of_readers; i++)
	{
		ptr[i] = new reader1->getInfo();
	}

	for (int i = 0; i < count_of_readers; i++)
	{
		
		ptr->setInfo();
	}*/
	
	// static array 

	//for (int i = 0; i < count_of_readers; i++)
	//{
	//	readers[i].getInfo();
	//	//readers[i].writeToFile(readers[i]);
	//}

	//for (int i = 0; i < count_of_readers; i++)
	//{
	//	
	//	//cout << readers[i];
	//	readers[i].setInfo();
	//}

	reader1.getInfo();
	/*reader1.writeToFile(reader1);
	reader1.readFromFile(reader1);*/
	reader1.setInfo();
	newBook.AddBook();
	
	/*application1.Create();
	cout << endl;
	reader1.apply(application1);
	reader1.ShowApl();*/
	/*reader1.getInfo();
	reader1.writeToFile();
	reader1.readFromFile();
	reader1.setInfo();*/
	return 0;
}

 