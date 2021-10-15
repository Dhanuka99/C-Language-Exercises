#include<stdio.h>//include header file

int main(){
	
	int cType;//customer type
	float amount,discount,finalBill;
	
	printf(" if u loyalty customer press 1 and your NonLoyaly customer press 2\n");
	printf("Enter customer type :");//user intercat 
	scanf("%d",&cType);//input customer type
	
	printf("Enter Amount :");
	scanf("%f",&amount);//input bill amount
	//first check the customer type
	if(cType==1){
			if(amount<=2000){
				discount = amount*15/100;//calculate discount
				finalBill=amount-discount;//calculate final bill
				printf("Discount is : %.2f\n",discount);//display discount
				printf("final bill : %.2f\n",finalBill);//display final bill amount
		
			}else if(amount>2000){
				discount = amount*25/100;//calculate discount
				finalBill=amount-discount;//calculate final bill
				printf("Discount is : %.2f\n",discount);//display discount
				printf("final bill : %.2f\n",finalBill);//display final bill amount
			}else{
				printf("not value");
			}
	}else if(cType==2){
			if(amount>3000){
			discount = amount*15/100;//calculate discount
			finalBill=amount-discount;//calculate final bill
			printf("Discount is :%.2f\n",discount);//display discount
			printf("final bill : %.2f\n",finalBill);//display final bill amount
		}else{
			printf("your amount less than 3000");
		}	
	}else{
			printf("invalid customer Type");
	}
		
		
	

	return 0;
}
