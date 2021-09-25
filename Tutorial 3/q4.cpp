#include<stdio.h>

int main(){
	float salary = 0.0;
	

	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	salary = salary*20/100+salary;
	
	printf("Your total salary is %.2f",salary);
	
	return 0;
}
