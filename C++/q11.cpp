#include<iostream>
class Shape{
	public:
		int color;
	private:
		int length;
	protected:
		int width;
};
class Rectangle:public Shape{
	
};
int main(){
	
	Rectangle *r = new Rectangle;
	r->color;
	
	return 0;
}
