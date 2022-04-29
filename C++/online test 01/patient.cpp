#include <iostream>

using namespace std;

class Patient {
	private:
		int appointmentID;
		string patientName;
		float doctorCharge;
		float hospitalCharge;
	public:
		void setPatientDetails(int pID, string pName);
		void displayPatientDetails();
		void setDoctorCharge(float dCharge);
		void setHospitalCharge(float hCharge);
		float calculateTolatPayment();
};

void Patient::setPatientDetails(int pID, string pName) {
	appointmentID = pID;
	patientName = pName;
}

void Patient::setDoctorCharge(float dCharge) {
	doctorCharge = dCharge;
}

void Patient::setHospitalCharge(float hCharge) {
	hospitalCharge = hCharge;
}

void Patient::displayPatientDetails() {
	cout << "Appoinment ID = " << appointmentID << endl
	<< "Patient Name = " << patientName << endl;
	cout << "Total Payment = " << calculateTolatPayment() << endl << endl;
}

float Patient::calculateTolatPayment() {
	return doctorCharge + hospitalCharge;
}

int main() {

	Patient p1, p2;
	
	p1.setPatientDetails(1001, "Nimal");
	p1.setDoctorCharge(1500);
	p1.setHospitalCharge(500);
	
	p2.setPatientDetails(1002, "Sunil");
	p2.setDoctorCharge(1700);
	p2.setHospitalCharge(500);
	
	p1.displayPatientDetails();
//	cout << "Total Payment = " << p1.calculateTolatPayment() << endl << endl;
	
	p2.displayPatientDetails();
//	cout << "Total Payment = " << p2.calculateTolatPayment() << endl;
	
	return 0;
}