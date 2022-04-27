#include <iostream>
#include<string.h>
using namespace std;
class Book{
	public:
		int bookID;
		char bookName[20];
		char author[20];
		void setBookDetails(char bookname[20],char bookauthor[20]){
			strcpy(bookName,bookname);
			strcpy(author,bookauthor);
		};
		void displayBookDetails(){
			cout<<bookID<<" "<<bookName<<" "<<author<<endl;
		};
		void setBookID(int id){
			bookID = id;
		};
};

int main(){
	Book b1;
	Book b2;
	Book b3;
	
	b1.setBookID(1212);
	b1.setBookDetails("Andare","kalhan");
	b1.displayBookDetails();
	
	b2.setBookID(1221);
	b2.setBookDetails("dupatha","shala");
	b2.displayBookDetails();
	
	b3.setBookID(1313);
	b3.setBookDetails("kisa","kalhan");
	b3.displayBookDetails();
	
	return 0;
}
