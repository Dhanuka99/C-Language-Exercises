#include <iostream>

using namespace std;

class Student {
	private:
		int studentID;
		string studentName;
		int marksOOC;
		int marksSPM;
		int marksISDM;
	public:
		void setStudentDetails(int sid, string sName);
		void setMarksOOC(int ooc);
		int getMarksOOC();
		void setMarksSPM(int spm);
		int getMarksSPM();
		void setMarksISDM(int isdm);
		int getMarksISDM();
};

void Student::setStudentDetails(int sid, string sName) {
	studentID = sid;
	studentName = sName;
}

void Student::setMarksOOC(int ooc) {
	marksOOC = ooc;
}

int Student::getMarksOOC() {
	return marksOOC;
}

void Student::setMarksSPM(int spm) {
	marksSPM = spm;
}

int Student::getMarksSPM() {
	return marksSPM;
}

void Student::setMarksISDM(int isdm) {
	marksISDM = isdm;
}

int Student::getMarksISDM() {
	return marksISDM;
}

int main() {
	Student s1, s2, s3, s4;
	
	s1.setStudentDetails(1234, "Kamal");
	s1.setMarksOOC(85);
	s1.setMarksSPM(80);
	s1.setMarksISDM(75);
	
	s2.setStudentDetails(4567, "Saman");
	s2.setMarksOOC(65);
	s2.setMarksSPM(50);
	s2.setMarksISDM(45);
	
	s3.setStudentDetails(7891, "Nimal");
	s3.setMarksOOC(98);
	s3.setMarksSPM(75);
	s3.setMarksISDM(80);
	
	s4.setStudentDetails(1212, "Sunil");
	s4.setMarksOOC(35);
	s4.setMarksSPM(60);
	s4.setMarksISDM(40);
	
	float avgOOC, avgSPM, avgISDM;
	
	avgOOC = (s1.getMarksOOC() + s2.getMarksOOC() + s3.getMarksOOC() + s4.getMarksOOC()) / 4.0;
	avgSPM = (s1.getMarksSPM() + s2.getMarksSPM() + s3.getMarksSPM() + s4.getMarksSPM()) / 4.0;
	avgISDM = (s1.getMarksISDM() + s2.getMarksISDM() + s3.getMarksISDM() + s4.getMarksISDM()) / 4.0;
	
	cout << "Average OOC mark : " << avgOOC << endl;
	cout << "Average SPM mark : " << avgSPM << endl;
	cout << "Average ISDM mark : " << avgISDM << endl;
	
	return 0;
}
