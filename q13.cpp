#include<stdio.h>

int main(){
	int number1,number2;
	printf("input number 1 :");
	scanf("%d",&number1);
	
	printf("input number 2 :");
	scanf("%d",&number2);
	
	if(number1>number2)
		printf("largest number is %d",number1);
	else
		printf("largest number is %d",number2);

	
	return 0;
}
