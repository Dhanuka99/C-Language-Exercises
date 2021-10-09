#include<stdio.h>

int main(){
	
	int number,i=1;
	float sum=0.0,avg=0.0;
	printf("Enter %d Number : ",i);
	scanf("%d",&number);
	
	
	while(number>0){
		sum+=number;
		avg=sum/i;
		printf("Enter %d Number : ",i);
		scanf("%d",&number);
		i++;
		
	}
	
	printf("%.2f %.2f",sum,avg);
	return 0;
}
