#include<iostream>

class Customer{
	public:
		
	int a,b;
	Customer(){
		a=10;
		b=20;
	}
};

int main(){
	Customer c;
	std::cout<<"A value is "<<c.a<<"B value is "<<c.b;
}
