#pragma once

class Book
{
private:
	int bookID;
	char bookName[60];
	char author[50];

public:
	void setBookDetails(const char bName[], const char bAuthor[]);
	void displayBookDetails();
	void setBookID(int bID);
};
