#include <iostream>

using namespace std;

class Taxi{
	private:
		int taxiID;
		string driver;
		int ratePerKM;
		int distanceTravelled;
	public:
		void setTaxiDetails(int id, string name, int rate, int dist);
		void displayTaxiDetails();
		float calculateBill();
};

void Taxi::setTaxiDetails(int id, string name, int rate, int dist) {
	taxiID = id;
	driver = name;
	ratePerKM = rate;
	distanceTravelled = dist;
}

void Taxi::displayTaxiDetails() {
	cout << "Taxi ID = " << taxiID << endl
		<< "Driver Name = " << driver << endl
	    << "BillAmount = " << calculateBill() << endl << endl;
}

float Taxi::calculateBill() {
	return ratePerKM * distanceTravelled;
}

int main() {
	
	Taxi t1, t2, t3;
	
	t1.setTaxiDetails(1234, "Ben", 150, 10);
	t2.setTaxiDetails(4321, "Chris", 250, 4);
	t3.setTaxiDetails(3434, "Nick", 175, 2);
	
	t1.displayTaxiDetails();
	
	t2.displayTaxiDetails();
	
	t3.displayTaxiDetails();
	
	return 0;
}