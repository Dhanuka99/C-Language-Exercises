#include<iostream>

class Customer{
	public:
		
	int a,b;
	Customer(int m,int n){
		a=m;
		b=n;
	}
};

int main(){
	Customer c = Customer(100,200);
	std::cout<<"A value is "<<c.a<<"B value is "<<c.b;
}
