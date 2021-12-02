#include<stdio.h>

int main(){
	
	int OTHours[5] = {30,35,40,25,50};
	
	float OTRate[5];
	float highestPayment=0.00,payment = 0.00;
	int person;
	int i;
	for(i=0;i<=4;i++){
		printf("Enter OT Rate %d Person : ",i+1);
		scanf("%f",&OTRate[i]);
		payment = OTHours[i] * OTRate[i];
		if(payment>highestPayment){
			highestPayment=payment;
			person = i;
		}
	}
	
	printf("Employee who erned highest payment : %d Rs: %.2f",person,highestPayment);
	
	

	
	return 0;
}
