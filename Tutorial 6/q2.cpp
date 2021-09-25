#include<stdio.h>

int main(){


	label:int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	if(num==0)
		printf("Number is 0\n");
	else if(num>0)
		printf("Number is positive\n");
	else
		printf("Number is negative\n");
		goto label;
	
	return 0;
}
