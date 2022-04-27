#include "Book.h"
#include<cstring>
#include <iostream>
#include<string>
using namespace std;

void Book::setBookDetails(int id,char bookname[],char bookauthor[]){
	bookID=id;
	strcpy(bookName=bookname);
	strcpy(author=bookauthor);
}
	
void Book::setBookID(int id){
	bookID = id;
}

void Book::displayBookDetails(){
	cout<<bookID<<" "<<bookName<<endl;
}
