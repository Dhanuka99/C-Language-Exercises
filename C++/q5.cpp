#include<iostream>
using std::string;

class Employee{
public:
	string name;
	string company;
	int age;
};
int main(){
	Employee emp1;
	emp1.name="Dhanuka";
	emp1.company="IFS";
	emp1.age=23;
	
	std::cout<<emp1.name;
	
	return 0;
}
