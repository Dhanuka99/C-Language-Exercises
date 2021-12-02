#include<stdio.h>
#include<string.h>
struct Book{
	char bookId[20];
	char title[20];
	int noOfCopies;
	int numberOfReaders;
	};
int main(){

	struct Book Book[3];//
	int i,most=0;
	char temp[10];
	for(i=0;i<=2;i++){
		printf("Enter Book %d ID : ",i+1);
		scanf("%s",&Book[i].bookId);
		printf("Enter Book %d Title : ",i+1);
		scanf("%s",&Book[i].title);
		printf("Enter Book %d no Of Copies : ",i+1);
		scanf("%d",&Book[i].noOfCopies);
		printf("Enter Book %d number Of Readers : ",i+1);
		scanf("%d",&Book[i].numberOfReaders);
	}
	
	for(i=0;i<=2;i++){
		int a = Book[i].numberOfReaders;
		if(a>most){
		strcpy(temp,Book[i].title);
		}
	}
	printf("Most Popular Book is : %s ",temp);
	
	
	return 0;
}
