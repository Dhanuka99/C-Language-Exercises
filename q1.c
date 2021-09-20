#include<stdio.h>

void main(){
	int number;
	printf("Input number : ");
	scanf("%d",&number);
	
	if(number>0)
		printf("Number Is Positive");
	else
		printf("Number Is Negative");
}
