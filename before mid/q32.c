#include<stdio.h>

int main(){
	//pay sales commissions
	int noOfYear,noOfUnit;
	float commissionPerUnit,commission;
	
	printf("Number of year : ");
	scanf("%d",&noOfYear);
	
	printf("Number of units : ");
	scanf("%d",&noOfUnit);
	

	
	if(noOfYear<=2){
		printf("commission %.2f",commission);
	}else{
		if(noOfUnit<0 && noOfUnit<=30){
		commissionPerUnit=3500.00;
		commission= commissionPerUnit*noOfUnit;
	printf("%.2f",commission);
		
	}else if(noOfUnit>31 && noOfUnit<=100){
		commissionPerUnit=2500.00;
		commission= commissionPerUnit*noOfUnit;
	printf("%.2f",commission);
	}else 
	{
		commissionPerUnit=1000.00;
		commission= commissionPerUnit*noOfUnit;
	printf("%.2f",commission);
	}
	}
	
	return 0;
	
}
