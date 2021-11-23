#include<stdio.h>

int findIncreasePercent(int);
float findNewPrice(int,float);
int main(){
	
	int productCode;
	float price= 0.00;
	
	printf("Enter Price : ");
	scanf("%f",&price);
	
	printf("Enter Product Code :");
	scanf("%d",&productCode);
	
	int percent = findIncreasePercent(productCode);
	float finalTotal = findNewPrice(percent,price);
	printf("New price : %.2f",finalTotal);
	
	return 0;
}

int findIncreasePercent(int category){
	switch(category){
		case 1:
			return 10;
			break;
		case 2:
			return 15;
			break;
		case 3:
			return 20;
			break;
		default:
			break;
	}
}

float findNewPrice(int percent,float price){
	return (price + price*(float)percent/100);
}

