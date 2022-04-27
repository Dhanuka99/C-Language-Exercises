#include "Book.h"
#include <iostream>

using namespace std;
int main(){
	Book book1;
	book1.setBookDetails(1212,"Dupatha","dhanuka");
	book1.setBookID(1212);
	book1.displayBookDetails();
	return 0;
}
