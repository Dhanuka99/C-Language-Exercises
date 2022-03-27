#include<iostream>

int main(){
	
	float number1 = 6.2;
	float number2 = 7.3;
	
	float *fptr;
	fptr = &number1;
	
	std::cout<<fptr;
	
	*fptr = number2;
	std::cout<<*fptr;
	
	return 0;
}
