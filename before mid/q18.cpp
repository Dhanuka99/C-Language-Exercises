#include<stdio.h>

int main(){
	
	int b,h;
	float vol ;
	printf("Enter b value : ");
	scanf("%d",&b);
	
	printf("Enter h value : ");
	scanf("%d",&h);
	

	
	vol =(float) (b*b*h)/3;
	
	
	printf("Display x = %.2f",vol);
	return 0;
}
