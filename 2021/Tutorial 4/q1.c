#include<stdio.h>

int main(){
	
	int number,tp;
	printf("Enter Value : ");
	scanf("%d",&number);
	
	if(number<0)
		tp = number*-1;
		printf("%d",tp);
	
	
	return 0;
}
