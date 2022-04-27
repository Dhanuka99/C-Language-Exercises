#include <string>
class Book{
	private:
		int bookID;
		char bookName[20];
		char author[20];
	public:
	
		void setBookDetails(int id, char bookname[], char bookauthor[]);
		void displayBookDetails();
		void setBookID(int id);
};
