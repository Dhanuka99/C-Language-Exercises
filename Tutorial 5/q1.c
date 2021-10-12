#include<stdio.h>

int main(){
	
	int number,i=0;
	float sum=0.0,avg=0.0;
	int x=5;
	x=1,2,3;
	
	printf("Enter Number : ");
	scanf("%d",&number);
	
	while(number>0){
		i++;
		sum+=number;
		
		printf("Enter Number : ");
		scanf("%d",&number);
		
		
	}
	
	printf("%.2f %.2f",sum,sum/i);
	return 0;
}
