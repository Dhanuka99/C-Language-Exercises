#include<stdio.h>

int main(){
	int marks[10] ;
	int i = 0,number;
	
	while(i<=10){
		printf("Enter Number %d :",i);
		scanf("%d",&number);
		marks[i] = number;
		i++;
	}
		return 0;
}
