#include<iostream>

class Rectangle{
	private:
		int length;
	
	public:
		void setLength(int l){
			length=l;
		}
		int getLength(){
			return length;
		}
};
int main(){
	Rectangle *r = new Rectangle;
	
	
	
	r->setLength(12);
	std::cout<<r->getLength()<<std::endl;
	
	return 0;
}
