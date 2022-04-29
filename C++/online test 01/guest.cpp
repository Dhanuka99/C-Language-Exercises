#include <iostream>

using namespace std;

class Guest{
	private:
		int guestID;
		string guestName;
		int ratePerDays;
		int numberOfDays;
	public:
		void setGuestDetails(int id, string name , int rate, int days);
		void displayGuestDetails();
		int calculateGuestBill();
};

void Guest::setGuestDetails(int id, string name, int rate, int days) {
	guestID = id;
	guestName = name;
	ratePerDays = rate;
	numberOfDays = days;
}

void Guest::displayGuestDetails() {
	cout << "\nGuest ID = " << guestID << endl
	<< "Guest Name = " << guestName << endl
	<< "BillAmount = " << calculateGuestBill() << endl;
}

int Guest::calculateGuestBill() {
	return ratePerDays * numberOfDays;
}

int main () {
	Guest g1, g2, g3;
	
	g1.setGuestDetails(1212,"Jared",4500,4);
	g2.setGuestDetails(1122,"Ben",3000,3);
	g3.setGuestDetails(1234,"Ruby",5750,2);
	
	g1.displayGuestDetails();
	g2.displayGuestDetails();
	g3.displayGuestDetails();
	
	return 0;
}
