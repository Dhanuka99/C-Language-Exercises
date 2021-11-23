#include<stdio.h>
float calDiscount(int);
float calNewPrice(float,float);
int main(){
	
	int productType;
	float price=0.00;
	
	printf("Enter Product Type : ");
	scanf("%d",&productType);
	printf("Enter Price : ");
	scanf("%f",&price);
	
	float discount = calDiscount(productType);
	float finalPrice = calNewPrice(discount,price);
	printf("Final Price : %.2f",finalPrice);
	return 0;
}

float calDiscount(int category){
	switch(category){
		case 1:
			return 0.10;
			break;
		case 2:
			return 0.15;
			break;
		case 3:
			return 0.20;
			break;
		default:
			break;		
	}
}

float calNewPrice(float discount,float oldPrice){
	return oldPrice - oldPrice*discount;
}

