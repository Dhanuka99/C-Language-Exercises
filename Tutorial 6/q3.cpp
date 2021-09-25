#include<stdio.h>

int main(){

	
	label : int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("it's even number\n");
	else
		printf("It's odd number\n");

	goto label;
	
	return 0;
}
