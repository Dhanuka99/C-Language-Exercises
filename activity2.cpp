#include<stdio.h>

int main(){
	
		int number1,number2,total=0;
	float avg=0.0;
	printf("enter number 1 :");
	scanf("%d",&number1);
	printf("enter number 2 :");
	scanf("%d",&number2);
	
	total=number1+number2;
	avg=total/2;
	printf("Total is %d\n",total);
	
	printf("Average is %.2f\n",avg);
	
	printf("number 1 is %d\n",number1);
	printf("number 2 is %d",number2);
	return 0;
}
