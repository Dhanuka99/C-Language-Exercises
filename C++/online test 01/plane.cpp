#include <iostream>

using namespace std;

class Plane {
	private:
		int planeID;
		string piolet;
		string destination;
	public:
		void setPlaneDetails(int pID, string pName, string pDest);
		void displayPlaneDetails();
		void getDestination();
		void setPioletName();
};

void Plane::setPlaneDetails(int pID, string pName, string pDest) {
	planeID = pID;
	piolet = pName;
	destination = pDest;
}

void Plane::displayPlaneDetails() {
	cout << "\nPlane ID = " << planeID << endl
		<< "Piolet = " << piolet << endl
		<< "Destination = " << destination << endl;
}

void Plane::setPioletName() {
	cout << "Input new pilot of plane " << planeID << " : ";
	cin >> piolet;
}

int main () {
	Plane p1, p2, p3, p4;
	
	p1.setPlaneDetails(1, "John", "USA");
	p2.setPlaneDetails(2, "George", "UK");
	p3.setPlaneDetails(3, "Henry", "USA");
	p4.setPlaneDetails(4, "Ronald", "UAE");
	
	p1.setPioletName();
	p2.setPioletName();
	p3.setPioletName();
	p4.setPioletName();
	
	p1.displayPlaneDetails();
	p2.displayPlaneDetails();
	p3.displayPlaneDetails();
	p4.displayPlaneDetails();
	
	return 0;
}
