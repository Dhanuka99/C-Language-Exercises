#include<stdio.h>

int main(){
	
	int u,a,t;
	float s;
	printf("Enter u value : ");
	scanf("%d",&u);
	
	printf("Enter a value : ");
	scanf("%d",&a);
	
	printf("Enter t value : ");
	scanf("%d",&t);
	
	s =(float) ((u*t)+ (a*t*t)/2);
	
	
	printf("Display x = %.1f",s);
	return 0;
}
