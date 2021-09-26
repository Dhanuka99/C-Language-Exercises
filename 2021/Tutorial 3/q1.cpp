#include <stdio.h>

int main(){
	
	float r,area=0.0,daimeter=0.0,pi=3.14,d=0.0;
	printf("Enter the Radias :");
	scanf("%f",&r);
	area = pi*r*r;
	daimeter = 2*pi*r;
	d=2*r;
	
	printf("Circle area is = %.2f\n",area);
	printf("Circle daimeter is = %.2f\n",d);
	printf("Circle circumference is = %.2f\n",daimeter);
	return 0;
}
