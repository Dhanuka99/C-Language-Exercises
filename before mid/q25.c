#include<stdio.h>

int main(){
	
	int age;
	float accBalance=0.0;
	
	printf("Enter Customer Age :");
	scanf("%d",&age);
	
	printf("Enter Account Balance : ");
	scanf("%.2f",&accBalance);
	
	if(age<=18){
		if(accBalance<=100000){
			printf("School Bag");
		}else if(accBalance>100000){
			printf("Laptop");
		}else{
			printf("No gift");
		}
	}else if(age>18){
		if(accBalance<=100000){
			printf("Travelling bag");
		}else if(accBalance>100000){
			printf("Rice cooker");
		}else{
			printf("No gift");
		}
	}else{
		printf("Invalid age");
	}
	
	return 0;
}
