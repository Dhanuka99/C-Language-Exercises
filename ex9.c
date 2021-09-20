#include<stdio.h>

void main(){
	
	int b1,b2,b3;
	float expenditure;
	printf("Enter student count for Bus 01 : ");
	scanf("%d",&b1);
	printf("Enter student count for Bus 02 : ");
	scanf("%d",&b2);
	printf("Enter student count for Bus 03 : ");
	scanf("%d",&b3);
	
	expenditure = (2*(b1+b2+b3))*70;
	

	
	printf("Total Expenditure is : %.2f",expenditure);
	
}
