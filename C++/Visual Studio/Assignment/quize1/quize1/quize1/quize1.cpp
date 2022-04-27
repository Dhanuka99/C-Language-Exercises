// quize1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Book.h"
#include <iostream>
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
