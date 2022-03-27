#include<iostream>

int main(){
	
	int firstValue = 15;
	int secondValue = 5;
	
	int *p1,*p2;
	
	p1=&firstValue;
	p2=&secondValue;
	
	*p1 = 20;
	*p2 = *p1;
	p1 = p2;
	
	*p1 = 10;
	
	std::cout<<firstValue<<"\t"<<secondValue<<std::endl;
	
	return 0;
}
