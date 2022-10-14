#include "BookShop.h"

void BookShop::calculatePrise()
{
	anyBook.getBookDetails();
	BooksPrice = anyBook.getPrice() * anyBook.getCount();
	cout << "The Price of Books : " << BooksPrice;
}

void BookShop::ShowAll()
{
}
