#include <iostream>
#include <fstream>

#include "Reader.h"
#include "BookShop.h"
#include "Books.h"
#include "Application.h"

using namespace std;

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



	Book* book1 = new Book;
	Book* book2 = new Book;
	Book* book3 = new Book;
	Book* book4 = new Book;
	Book* book5 = new Book;

	Reader reader1(1000);
	Reader reader2(5000);
	Reader reader3(10000);
	Reader reader4(300);
	Reader reader5(40000);

	Reader* ptrBook;
	ptrBook = &reader2;
	//Reader reader2(2000); = new Reader;
	/*Reader* reader3 = new Reader;
	Reader* reader4 = new Reader;
	Reader* reader5 = new Reader;
	Reader* reader6 = new Reader;*/
	//Application apl[10];
	Application application1;
	Application application[10];
	//Book arr[20];
	int count_of_books = 0;
	int option = 0, i = 0;
	string answer;
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
		cout << "\n\t\t----------------------------------------\n";
		cout << "\n\t\tOption: ";
		cin >> option;
		switch (option)
		{
		case 1:  system("cls");
			cout << "Enter count of books: ";
			cin >> count_of_books;
			for (int i = 0; i < count_of_books; i++)
			{
				book1->getBookDetails();
				book1->writeBook(*book1, i, count_of_books - 1);
			}
			break;
		case 2: book1->showAllBooks(*book1);
			break;
		case 3:
			system("cls");
			reader1.getInfo();
			do
			{
				reader1.apply(*book1);

				// pointer to instance of the class
				//ptrBook->apply(*book2);
				application[i].Create(reader1, *book1);
				application[i].writeApplication();
				i++;
				cout << "Would you like buy more books?  (yes/no)" << endl;
				cin >> answer;
				if (answer == "no")
				{
					break;
				}
			} while (answer == "yes");
			break;
		case 4:
			reader1.payOrder();
			break;
		case 5:
			application1.ShowAllApplication();
			break;
		case 6: exit(0);
			break;
		default:cout << "\a";
		}
	}


	/*
	reader1.setInfo();


	*/
	/*try {
		ptr = new Book[20];
	}
	catch (bad_alloc xa)
	{
		cout << " Вийняткова Ситуація \n ";
		return 1;
	}*/

	/*ptr = new int(count_of_readers);
	*/


	//dynamic array
	//Book* bk1 = new Book;
	//Book* ptr=0, i;
	//for (int i = 0; i < 2; i++)
	//{
	//	ptr[i].getBookDetails();
	//	ptr[i] = *bk1;
	//	ptr[i].writeBook(bk1);
	//}

	//for (int i = 0; i < 2; i++)
	//{

	//	ptr[i].readBook(bk1);
	//}
	////book.showAllBooks(book);
	////application1.Create(bk1);
	//delete []ptr;
	//delete bk1;
	return 0;
}

