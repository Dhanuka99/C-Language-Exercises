#include <iostream>
#include "University.h"
using namespace std;
class ClassRoom{
	private:
		int roomNo;
	public:
		ClassRoom(){
		};
		ClassRoom(int no){
			roomNo=no;
		};
		void display(){
			cout<<"Class Room "<<roomNo<<endl;
		};
		~ClassRoom(){
			cout<<"Deleting Room"<<roomNo<<endl;
		};
};
