#include <stdio.h>
#include <assert.h>//functions
#include<math.h>

//void hypotenuse(double,double);
double hypotenuse(double side1, double side2);
int main() {

	
	double side1, side2;
	printf("Enter side 1: ");
	scanf("%lf", &side1);
	printf("Enter side 2: ");
	scanf("%lf", &side2);
	
	
	assert(fabs(hypotenuse(3.0, 4.0) - 5.0) < 0.01);
	assert(fabs(hypotenuse(5.0, 12.0) - 13.0) < 0.01);
	assert(fabs(hypotenuse(8.0, 15.0) - 17.0) < 0.01);

	printf("hypotenuse(side1, side2) unit tests passed!!");

	
	printf("value is :  %.2lf",hypotenuse(side1,side2));
	return 0;                      
}

double hypotenuse(double side1, double side2) {
	return sqrt(pow(side1, 2.0) + pow(side2, 2.0));
}




