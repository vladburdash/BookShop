#include <iostream>
#include <fstream>

#include "Reader.h"
#include "BookShop.h"
#include "Books.h"
#include "Application.h"
#include "Publisher.h"
#include "Administration.h"

using namespace std;
int Publisher::publisherIndex;
// oveloaded functions
void getSumAllBooks(Book bk)
{
	int generalSum;
	generalSum = bk.getPrice() * bk.getCount();
	cout << "\nGeneral sum of all books: " << generalSum;
}

void getSumAllBooks(Book& bk, int generalSum)
{
	generalSum = bk.getPrice() * bk.getCount();
	cout << "\nGeneral sum of all books: " << generalSum;
}

// friend function
void getMaxMoney(Reader rd1, Reader rd2)
{
	if (rd1.getAmountOfMoney() > rd2.getAmountOfMoney())
		cout << rd1.getReaderName() << " " << rd1.getReaderSurname() << " " << "has more money" << endl;
	else
		cout << rd2.getReaderName() << " " << rd2.getReaderSurname() << " " << "has more money" << endl;

}
int main()
{
	////BookShop newBook = newBook;


	//Reader readers[20];
	//Reader* ptr, i;
	/*try {
		ptr = new Reader[20];
	}
	catch (bad_alloc xa)
	{
		cout << " Вийняткова Ситуація \n ";
		return 1;
	}*/

	/*ptr = new int(count_of_readers);
	*/


	//dynamic array

	/*for (int i = 0; i < count_of_readers; i++)
	{
		reader1.getInfo();
		ptr[i] = reader1;
	}

	for (int i = 0; i < count_of_readers; i++)
	{

		ptr[i].setInfo();
	}*/

	// static array 

	/*for (int i = 0; i < count_of_readers; i++)
	{
		reader1.getInfo();

		reader1.writeToFile();
	}

	for (int i = 0; i < 1; i++)
	{
		reader1.readFromFile();

	}*/

	// object class of Book
	Book bookAllSum;

	Book* book1 = new Book;
	Book* book2 = new Book;
	Book* book3 = new Book;
	Book* book4 = new Book;
	Book* book5 = new Book;

	// objects class of Reader
	// 3 ways to create odject with constructor
	Reader reader1(100);
	Reader reader2 = Reader(1000);
	Reader* reader3 = new Reader(10000);

	Reader reader4(5000);
	Reader reader5(300);
	Reader* ptrReader;
	ptrReader = &reader4;

	// work with friend function
	/*reader4.getInfo();
	reader5.getInfo();
	getMaxMoney(reader4, reader5);*/

	// composision
	BookShop Yakaboo;

	Application application1;
	Application application[10];

	// aggregation
	Application application5(&reader5, *book3);

	// association
	Publisher publisher1(reader3, book3, "Ranok");
	Publisher publisher2(reader3, book4, "BookWorld");

	// inheritance
	Administration admin1("Anton", "Borusenko");

	// lab 4 task 11 
	Person people1("Name", "Surname", 18, "man", "email.com");
	Reader reader6("Antoni", "Blinkey", 46, "man", "email.com", 10000, 51681022);

	// friend class
	Discount discount1;

	// multiple inheritance
	/*Accountant accountant1("1C", "Marry", "Stamy", 42, "woman", "alwaysHere.com", 12000, "Apple");
	accountant1.showAccountant();*/
	
	int count_of_books = 0; 
	int option = 0, i = 0;
	string answer;
	int Sum = 0;
	for (;;)
	{
		//intro();
		cout << "\t\t------------------------------------------";
		cout << "\n\t\tPress 1 to Add Book";
		cout << "\n\t\tPress 2 to View All Books";
		cout << "\n\t\tPress 3 to Order Book";
		cout << "\n\t\tPress 4 to Pay Order";
		cout << "\n\t\tPress 5 to View All Orders";
		cout << "\n\t\tPress 6 to Exit";
		cout << "\n\t\tPress 7 to Calculate Sum of All Book";
		cout << "\n\t\tPress 8 to View Composition";
		cout << "\n\t\tPress 9 to View Agregation";
		cout << "\n\t\tPress 10 to View work with static field";
		cout << "\n\t\tPress 11 to View ";
		cout << "\n\t\t----------------------------------------\n";
		cout << "\n\t\tOption: ";
		cin >> option;
		switch (option)
		{
			// add book to shop 
		case 1:  system("cls");
			cout << "Enter count of books: ";
			cin >> count_of_books;
			for (int i = 0; i < count_of_books; i++)
			{
				book1->getBookDetails();
				book1->writeBook(*book1, i, count_of_books - 1);
			}
			break;
			// View All Books
		case 2:
			book1->showAllBooks(*book1);
			break;
			// Order Book
		case 3:
			system("cls");
			reader1.getInfo();

			do
			{
				reader1.apply(*book1);
				// pointer to instance of the class
				//ptrReader->apply(*book2);
				application1.Create(reader1, *book1);

				application1.writeApplication();
				i++;
				cout << "Would you like buy more books?  (yes/no)" << endl;
				cin >> answer;
				if (answer == "no")
				{
					break;
				}
			} while (answer == "yes");
			break;
			// Pay Order
		case 4:
			reader1.payOrder();
			break;
			// Show all application 
		case 5:
			application1.ShowAllApplication();
			break;
			// exit from program
		case 6: exit(0);
			break;

		case 7:
			bookAllSum.getBookDetails();
			getSumAllBooks(bookAllSum);
			getSumAllBooks(bookAllSum, Sum);
			break;
		case 8:
			Yakaboo.calculatePrise();
			break;
		case 9:
			application5.Create(reader5, *book5);
			application5.writeApplication();
			break;
		case 10:
			// задамо індекс як 22000 для видавництва
			cout << "\nIndex = ";
			publisher1.setPublisherIndex(22000);
			Publisher::getPublisherIndex();
			// зміними індекс для іншого обєкту
			cout << "\nChanged index = ";
			publisher2.setPublisherIndex(77223);
			Publisher::getPublisherIndex();
			cout << endl;
			break;
		case 11:
			admin1.getAccessCode();
			admin1.getAdmin();
		default:cout << "\a";
		}
	}

	//delete []ptr;
	//delete bk1;
	return 0;
}

