#include<stdio.h>

int main(){
	//define structure 
	struct Book{
		char bookId[20];
		char title[20];
		int noOfCopies;
		int numberOfReaders;
	};
	
	
	char bookId[3]= {'B4500','B800','B200'};
	char title[3] = {'java','happy','alone'};
	int noOfCopies[3] = {5,6,7};
	int numberOfReaders[3] = {16,12,10};
		
	printf("%s",bookId[0]);
		printf("%s",title[0]);
			printf("%d",noOfCopies[0]);
				printf("%d",numberOfReaders[0]);
	
	return 0;
}
