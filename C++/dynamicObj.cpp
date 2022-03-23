#include<iostream>

class Rectangle{
	
	public:
		int width;
		int height;
		void setWidth(int w){
			width=w;
		}
		
		void setHeighr(int h){
			height=h;
		}
		
		void calArea(){
			std::cout<<"Area is : "<< width*height<<std::endl;
		}
		//destructor
		~Rectangle(){
			std::cout<<"Distructor call"<<std::endl;
		}
	
};

int main(){
	Rectangle *r = new Rectangle;
	r->setHeighr(50);
	r->setWidth(50);
	r->calArea();
	
	delete r;
}
