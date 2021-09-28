#include<stdio.h>

int main(){
	
	int n,p;
	float q ,m;
	printf("Enter m value : ");
	scanf("%f",&m);
	
	printf("Enter n value : ");
	scanf("%d",&n);
	
	printf("Enter p value : ");
	scanf("%d",&p);
	
	q =(float) m/((4*n*p)-(n*p*p));
	
	
	printf("Display x = %.1f",q);
	return 0;
}
