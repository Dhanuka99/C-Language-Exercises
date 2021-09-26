#include <stdio.h>


int main(){
	
	float z,y,w,x;
	
	printf("input z :\n");
	scanf("%f",&z);
	printf("input y :\n");
	scanf("%f",&y);
	printf("input w :\n");
	scanf("%f",&w);	
	
	x =(w/((y*y)-(2*y*z)));

	printf("%.1f ",x);

	return 0;
}
