#include<stdio.h>

int main(){
	
	int b,c,d;
	float a;
	
	printf("Enter b value :");
	scanf("%d",&b);
	
	printf("Enter c value : ");
	scanf("%d",&c);
	
	printf("Enter d value : ");
	scanf("%d",&d);
	
	a =(float) (d*d)/((b*b)- (b*c)/2);
	
	printf("A value is = %.1f",a);
	
	
}
