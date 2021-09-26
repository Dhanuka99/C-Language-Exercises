#include <stdio.h>


int main(void){
	
	int n,p;
	float q,m;
	printf("input m :");
	scanf("%f",&m);
	printf("input n :");
	scanf("%d",&n);
	printf("input p :");
	scanf("%d",&p);
	

	q =(float) m/((4*n*p)-(n*p*p));


	printf("value of %.1f",q);

	return 0;
}
