#include<iostream>
#include<iomanip>
class Test{
	
	public:
		void fun(int p,int q){
			 p=20;
			 q=10;
		}
};

int main(){
	Test obj;
	int p=10;
	obj.fun(p,p);
	std::cout<<p<<std::endl;
	int* ptr;
	int var = 7;
	//ptr = &var;
	std::cout<<*ptr<<std::endl;
	return 0;
}
