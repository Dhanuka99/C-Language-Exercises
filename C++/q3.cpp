#include<iostream>
#include<iomanip>
class Test{
	int x;
	
	public:
		void setX(int y);
		void display();
};

void Test::setX(int y){
	x=y;
}

void Test::display(){
	std::cout<<x++<<std::endl;
}

int main(){
	Test obj1;
	obj1.setX(10);
	obj1.display();
	obj1.display();
	float x = 3.1596;
	std::cout<<std::setprecision(2)<<x<<std::endl;

	return 0;
}
