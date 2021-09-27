#include<stdio.h>

int main(){
	int number1,number2;
	printf("input number 1 :");
	scanf("%d",&number1);
	
	printf("input number 2 :");
	scanf("%d",&number2);
	
/*	if(number1==number2)
		printf("number are same");
	else
		printf("number are not same");*/
	(number1==number2) ? printf("numbers are same") : printf("numbers are not same");
	
	return 0;
}
