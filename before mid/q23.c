#include<stdio.h>

int main(){
	//television adv
	int timePeriod,noOfTime;
	float adAmount=0.0,amount=0.0;
	char peakTime;
	
	printf("Enter Time Period :");
	scanf("%d",&timePeriod);
	
	if(timePeriod<30){
		adAmount = 10000.00;
	}else if(timePeriod>=30 && timePeriod<=60){
		adAmount = 15000.00;
	}else if(timePeriod>60){
		adAmount = 20000.00;
	}else{
		printf("Invalid Time Period");
	}
	
	printf("Enter Number of time :");
	scanf("%d",&noOfTime);
	
	amount  = adAmount*noOfTime;
	
	
	printf("Are you want to showing peak time :\n");
	scanf(" %c",&peakTime);
	
	if(peakTime=='Y' || peakTime=='y'){
		amount+=adAmount*10/100;
		printf("Total Amout is : %.2f",amount);
	}else if(peakTime=='N' || peakTime=='n'){
			printf("Total Amout is : %.2f",amount);
	}else{
		printf("Invalid character\n");
	}
//	printf("Total Amout is : %.2f",amount);
	
	return 0;
}
