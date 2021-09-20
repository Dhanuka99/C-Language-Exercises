#include<stdio.h>

void main(){
	int number;

	printf("Input number : ");
	scanf("%d",&number);
	
	if(number%2==0)
		printf( "Even Number");
	else
		printf(" Odd Number");
}
