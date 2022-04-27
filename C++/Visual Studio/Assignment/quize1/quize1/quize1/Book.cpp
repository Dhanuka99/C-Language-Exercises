#include "Book.h"
#include <iostream>
#include <cstring>

using namespace std;

void Book::setBookDetails(const char bName[], const char bAuthor[]) {
	strcpy_s(bookName, bName);
	strcpy_s(author, bAuthor);
};

void Book::displayBookDetails() {
	cout << "\nBookId = " << bookID << endl;
	cout << "BookName = " << bookName << endl;
	cout << "Author = " << author << endl;
};

void Book::setBookID(int bID) {
	bookID = bID;
};