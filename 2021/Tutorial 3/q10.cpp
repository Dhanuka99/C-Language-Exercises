#include <stdio.h>


int main(){
	
	int b,h;
	float vol;
	printf("input Base length :\n");
	scanf("%d",&b);
	printf("input Height :\n");
	scanf("%d",&h);
	
	vol =(float) 1/3*b*b*h;


	printf("%.2f",vol);

	return 0;
}
