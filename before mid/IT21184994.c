#include<stdio.h>//include header file for input output
/*
ID : IT21184994
Name : R.D.D.L.K JAYASINGHE
Group : 12.1
Campus : malabe campus
*/

int main(){
	
	int customerType;//variable initializing for customer type
	float amount=0.00,discount=0.00,finalBill=0.00;//variable initializing for amount, discount, final Bill
	
	printf("***If you are loyalty customer press 1 and your are NonLoyaly customer press 2****\n");//print customer hint
	printf("Enter customer type :");//user interact message for customer type
	scanf("%d",&customerType);//input customer type
	
	printf("Enter Amount :");//user interact message for customer bill amount
	scanf("%f",&amount);//input bill amount
	//first check the customer type
	if(customerType==1){
			if(amount<=2500){
				discount = amount*0.05;//calculate discount
				finalBill=amount-discount;//calculate final bill
				printf("Discount Amount :Rs. %.2f\n",discount);//display discount
				printf("Final Bill Amount :Rs. %.2f\n",finalBill);//display final bill amount
		
			}else if(amount>2500){
				discount = amount*0.1;//calculate discount
				finalBill=amount-discount;//calculate final bill
				printf("Discount Amount :Rs. %.2f\n",discount);//display discount
				printf("Final Bill Amount :Rs. %.2f\n",finalBill);//display final bill amount
			}else{
				printf("not value");
			}
	}else if(customerType==2){
			if(amount>5000){
				discount = amount*0.1;//calculate discount
				finalBill=amount-discount;//calculate final bill
				printf("Discount Amount :Rs. %.2f\n",discount);//display discount
				printf("Final Bill Amount :Rs. %.2f\n",finalBill);//display final bill amount
			}else{
				printf("your amount less than 5000");
			}	
	}else{
		printf("invalid customer Type");//if customer press invalid type, execute this statement
	}
		
		
	return 0;
}
