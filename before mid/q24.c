#include<stdio.h>

int main(){
	//customer seen
	char itemCode,customerType;
	float itemPrice=0.0,totalAmout=0.0,discount=0.0;
	int qty;
	
	printf("Enter Item Code :");
	scanf("%c",&itemCode);
	
	if(itemCode=='N' || itemCode == 'n'){
		itemPrice = 760.00;
	}else if(itemCode=='B' || itemCode == 'b'){
		itemPrice = 550.00;
	}
	else if(itemCode=='F' || itemCode == 'f'){
		itemPrice = 890.00;
	}else{
		printf("Invalid itemcode");
	}
	
	printf("Enter Quantity :");
	scanf("%d",&qty);
	
	totalAmout = itemPrice*qty;
	
	
	printf("Customer Type :");
	scanf("%d",&customerType);
	
	if(customerType==1){
		printf("You our Loyalty Customer..\n");
		discount = totalAmout*20/100;
		
		printf("Total Price : %.2f",totalAmout-discount);
	}else if(customerType==2){
		printf("You our non Loyalty Customer..\n");
		discount = totalAmout*10/100;
		
		printf("Total Price : %.2f",totalAmout-discount);
	}else{
		printf("Invalid customer type");
	}
	
//	printf("Your Total Price is %.2f",totalAmout);
	
	return 0;
}
