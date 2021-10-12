#include<stdio.h>

int main(){
	
	int cType;
	float amount=0.0,discount=0.0,finalBill=0.0;
	
	printf(" if u loyalty customer press 1 and your nonlacal customer press 2\n");
	printf("Enter customer type :");
	scanf("%d",&cType);
	
	printf("Enter Amount :");
	scanf("%f",&amount);
	
	switch(cType){
		case 1:
			if(amount<=2500){
				discount = amount*0.05;
				finalBill=amount-discount;
				printf("Discount is : %.2f\n",discount);
				printf("final bill : %.2f\n",finalBill);
		
			}else if(amount>2500){
				discount = amount*0.1;
				finalBill=amount-discount;
				printf("Discount is : %.2f\n",discount);
				printf("final bill : %.2f\n",finalBill);
	}else{
		printf("not value");
	}
	break;

	
	case 2 :
		if(amount>5000){
			discount = amount*10/100;
			finalBill=amount-discount;
			printf("Discount is :%.2f\n",discount);
			printf("final bill : %.2f\n",finalBill);
		}else{
			printf("your amount less than 5000");
		}	
		break;
		
	default:
		printf("invalid customer Type");
		break;
		
		}
	
}
