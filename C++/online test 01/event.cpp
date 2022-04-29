#include <iostream>

using namespace std;

class Event {
	private:
		int eventId;
		string eventType;
		string themeColor;
		string location;
	public:
		void setEventDetails(int eID, string eType, string tColor, string eLocation);
		void displayEventDetails();
		void setEventLocation();
};

void Event::setEventDetails(int eID, string eType, string tColor, string eLocation) {
	eventId = eID;
	eventType = eType;
	themeColor = tColor;
	location = eLocation;
}

void Event::displayEventDetails() {
	cout << "\nEventType = " << eventType << endl
		<< "ThemeColor = " << themeColor << endl
		<< "Location = " << location << endl;
}

void Event::setEventLocation() {
	cout << "Input new location of event " << eventId <<": ";
	cin >> location;
}

int main() {
	Event *e1 = new Event();
	Event *e2 = new Event();
	Event *e3 = new Event();
	
	e1->setEventDetails(1, "party", "red", "Nugegoda");
	e2->setEventDetails(2, "wedding", "purple", "Maharagama");
	e3->setEventDetails(3, "party", "pink", "Malabe");
	
	e1->setEventLocation();
	e2->setEventLocation();
	e3->setEventLocation();
	
	e1->displayEventDetails();
	e2->displayEventDetails();
	e3->displayEventDetails();
	
	delete e1;
	delete e2;
	delete e3;
	
	return 0;
}