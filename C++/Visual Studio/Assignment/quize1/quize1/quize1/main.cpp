#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
	Book b1, b2, b3;

	int i1, i2, i3;

	b1.setBookDetails("Jane Eyre", "Charlotte Bronte");
	b1.setBookID(1212);

	b2.setBookDetails("Divergent", "Veronica Roth");
	b2.setBookID(1234);

	b3.setBookDetails("Matilda", "Roald Dahl");
	b3.setBookID(3456);

	cout << "Input new book ID 1 : ";
	cin >> i1;
	cout << "Input new book ID 2 : ";
	cin >> i2;
	cout << "Input new book ID 3 : ";
	cin >> i3;

	b1.setBookID(i1);
	b2.setBookID(i2);
	b3.setBookID(i3);



	b1.displayBookDetails();
	b2.displayBookDetails();
	b3.displayBookDetails();

	return 0;
}