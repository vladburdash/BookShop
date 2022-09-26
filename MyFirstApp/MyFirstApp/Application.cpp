#include "Application.h"

void Application::Create() {
	cout << "Enter name author of book: ";
	cin >> NameAuthorOfBook;

	cout << "Enter surname author of book: ";
	cin >> SurnameAuthorOfBook;

	cout << "Enter title of book: ";
	cin >> TitleOfBook;
}

void Application::ShowApplication() {
	cout << "Author :" << NameAuthorOfBook << " " << 
		 SurnameAuthorOfBook << endl << "Title: " << TitleOfBook;
}