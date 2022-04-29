#include <iostream>

using namespace std;

class Salesman{
	private:
		int salesmanID;
		string salesmanName;
		float salary;
		int contactNo;
	public:
		void setSalesmanDetails(int sID, string name, float sal, int cNo);
		void displaySalesmanDetails();
		void setSalesmanContactNo();
};

void Salesman::setSalesmanDetails(int sID, string name, float sal, int cNo) {
	salesmanID = sID;
	salesmanName = name;
	salary = sal;
	contactNo = cNo;
}

void Salesman::displaySalesmanDetails() {
	cout << "\nSalesmanId = " << salesmanID << endl
	<< "SalesmanName = " << salesmanName << endl
	<< "salary = " << salary << endl
	<< "ContactNo = " << contactNo << endl;
}

void Salesman::setSalesmanContactNo() {
	cout << "Input new contact number of salesman " << salesmanID << " : ";
	cin >> contactNo;
}

int main () {
	Salesman *s1 = new Salesman();
	Salesman *s2 = new Salesman();
	Salesman *s3 = new Salesman();
	
	s1->setSalesmanDetails(1, "John", 30000, 772358375);
	s2->setSalesmanDetails(2, "Ann", 40000, 773029452);
	s3->setSalesmanDetails(3, "Leema", 35000, 778294526);
	
	s1->setSalesmanContactNo();
	s2->setSalesmanContactNo();
	s3->setSalesmanContactNo();
	
	s1->displaySalesmanDetails();
	s2->displaySalesmanDetails();
	s3->displaySalesmanDetails();
	
	delete s1, s2, s3;
	
	return 0;
}
