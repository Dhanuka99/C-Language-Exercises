#include<iostream>

class Rectangle{
	private:
		int width;
		int length;
	public:
		void setWidth(int w);
		int getWidth();
		void setLength(int l);
		int getLength();
		int getArea(int l,int w);


};

void Rectangle::setWidth(int w){
	width = w;
}

void Rectangle::setLength(int l){
	length=l;
}

int Rectangle::getWidth(){
	return width;
}

int Rectangle::getLength(){
	return length;
}

int Rectangle::getArea(int l,int w){
	return l*w;
}


int main(){
	Rectangle rectangle1;
	rectangle1.setWidth(50);
	rectangle1.setLength(50);
	int area = rectangle1.getArea(rectangle1.getLength(),rectangle1.getWidth());
	std::cout<<"Rectangle Area is : "<<area;
}
