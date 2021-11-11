#include<stdio.h>
float calPayment(int,int);
int main(){
	int iCode,qty;
	float payment=0.00;
	printf("Enter Item Code : ");
	scanf("%d",&iCode);
	printf("Enter Item Qyantity : ");
	scanf("%d",&qty);
	payment = calPayment(iCode,qty);
	printf("Payment is %.2f",payment);
	return 0;
}

float calPayment(int itemCode,int quantity){
	
	if(itemCode==1){
		return  quantity*50.00;
	}else if(itemCode==2){
		return  quantity*100.00;
	}
	return 0;
}
