#include<stdio.h>
float circleArea(int);//function prototype
int main(){
	int number;
	//user input
	printf("Enter Integer value : ");
	scanf("%d",&number);
	//call the function
	float x = circleArea(number);
	printf("Circle Area is %.2f",x);
	
}

//create function 
float circleArea(int x){
	//x = radius
	float area = 3.14*x*x;
	return area;
}



