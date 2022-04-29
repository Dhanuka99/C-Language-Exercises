#include <iostream>

using namespace std;

class Lab{
	private:
		int labID;
		int capacity;
	public:
		void setLabDetails(int id, int capt);
		int getCapacity();
};

void Lab::setLabDetails(int id, int capt) {
	labID = id;
	capacity = capt;
}

int Lab::getCapacity() {
	return capacity;
}

int main () {
	Lab l1, l2, l3;
	
	l1.setLabDetails(401, 60);
	l2.setLabDetails(402, 40);
	l3.setLabDetails(403, 30);
	
	int ncapt;
	cout <<"Insert Capacity : ";
	cin >> ncapt;
	
	if (ncapt <= l3.getCapacity()) {
		cout << "Lab 403" << endl;
	}
	else if (ncapt <= l2.getCapacity()) {
		cout << "Lab 402" << endl;
	}
	else if (ncapt <= l1.getCapacity()) {
		cout << "Lab 401" << endl;
	}
	
	return 0;
}
