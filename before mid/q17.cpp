#include<stdio.h>
#include<math.h>
int main(){
	
	int z,y,w;
	float x ;
	printf("Enter z value : ");
	scanf("%d",&z);
	
	printf("Enter y value : ");
	scanf("%d",&y);
	
	printf("Enter w value : ");
	scanf("%d",&w);
	
	x =(float) w/((y*y)-(2*y*z));
	
	
	printf("Display x = %.1f",x);
	return 0;
}
