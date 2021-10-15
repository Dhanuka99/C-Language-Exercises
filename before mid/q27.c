#include<stdio.h>

int main(){
	//elecity bill
	int cType,unit,addtional;
	float amount=0.0;
	printf("Enter Type:");
	scanf("%d",&cType);
	
	printf("Enter Units :");
	scanf("%d",&unit);
	
	if(unit<=100){
		amount =(float) unit*10.00;
	}
	else if(unit>100){
		addtional=(unit%100)*30.00;
		amount = (unit/100)*10.00*100+addtional;
	}
	else{
		printf("not a unit");
	}
		
	
	if(cType==1){
		if(unit>100){
			amount = amount + amount*0.2;
			printf("%.2f",amount);
		}
		
	}else if(cType==2){
		printf("%.2f",amount);
	}else{
		printf("Invalid customer type");
	}

}
