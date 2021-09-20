#include<stdio.h>

void main(){
	
	float bonus,salary;

	printf("Enter your salary : ");
	scanf("%f",&salary);
	
	
	salary = salary+salary*15/100;
	

	
	printf("Your Total salary is : %.2f",salary);
	
}
