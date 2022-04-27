#include <iostream>
using namespace std;
class Employee{
	public:
		void print();
		void print(char msg[]);
		void print(char msg[],int no);
};

void Employee::print(){
	cout<<"Hello"<<endl;
}
void Employee::print(char msg[]){
	cout<<"Hello"<<msg<<endl;
}
void Employee::print(char msg[],int no){
	cout<<"Hello"<<msg<<no<<endl;
}

int main(){
	Employee saman;
	saman.print();
	saman.print("Dhanuka");
	saman.print("I am sick",122);
	return 0;
}
