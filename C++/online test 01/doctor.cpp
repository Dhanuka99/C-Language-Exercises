#include <iostream>

using namespace std;

class Doctor {
	private:
		int doctorID;
		string doctorName;
		string specialization;
		string hospital;
	public:
		void setDoctorDetails(int dID, string dName, string dSpec, string dHospital);
		void displayDoctorDetails();
		string getSpecialization();
		void setHospital();
};

void Doctor::setDoctorDetails(int dID, string dName, string dSpec, string dHospital){
 doctorID = dID;
 doctorName = dName;
 specialization = dSpec;
 hospital = dHospital;
}

void Doctor::displayDoctorDetails() {
 cout << "\nDoctorID = " << doctorID << endl;
 cout << "DoctorName = " << doctorName << endl;
 cout << "Specialization = " << specialization << endl;
 cout << "Hostpital = " << hospital << endl;
}

string Doctor::getSpecialization() {
 return specialization;
}

void Doctor::setHospital() {
 cout << "Input new hostpital of doctor " << doctorID << " : ";
 cin >> hospital;
}

int main() {
 Doctor d1, d2, d3;

 d1.setDoctorDetails(1, "Dr.Sunil", "Neurologist", "Asiri");
 d2.setDoctorDetails(2, "Dr.Yasantha", "Oncologist", "Lanka");
 d3.setDoctorDetails(3, "Mr.Godvin", "Cardiologist", "CCC");
 

 d1.setHospital();
 d2.setHospital();
 d3.setHospital();

 d1.displayDoctorDetails();
 d2.displayDoctorDetails();
 d3.displayDoctorDetails();
 
 return 0;
}