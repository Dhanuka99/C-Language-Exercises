#include <iostream>
#include <iomanip>

using namespace std;

class Student{
	private:
		int studentID;
		string studentName;
		int marksOOC;
		int marksSPM;
		int marksISDM;
	public:
		void setStudentDetails(int sID, string sName, int ooc, int spm, int isdm);
		int getStudentID();
		int getMarksOOC();
		int getmarksSPM();
		int getmarksISDM();
		string getstudentName();
};

void Student::setStudentDetails(int sID, string sName, int ooc, int spm, int isdm) {
	studentID = sID;
	studentName = sName;
	marksOOC = ooc;
	marksSPM = spm;
	marksISDM = isdm;
}

int Student::getStudentID() {
	return studentID;
}

int Student::getMarksOOC() {
	return marksOOC;
}

int Student::getmarksSPM() {
	return marksSPM;
}

int Student::getmarksISDM() {
	return marksISDM;
}

string Student::getstudentName() {
 return studentName;
}

int main () {
	
Student s1, s2, s3;
int s1TM, s2TM, s3TM;

s1.setStudentDetails(1234, "kylie", 75, 80, 60);
s2.setStudentDetails(4321, "james", 65, 70, 85);
s3.setStudentDetails(6543, "kyson", 90, 85, 80);

s1TM = s1.getmarksISDM() + s1.getMarksOOC() + s1.getmarksSPM();
s2TM = s2.getmarksISDM() + s2.getMarksOOC() + s2.getmarksSPM();
s3TM = s3.getmarksISDM() + s3.getMarksOOC() + s3.getmarksSPM();

cout << "Student ID = " << s1.getStudentID() << endl;
cout << "StudentName = "<< s1.getstudentName() << endl;
cout << "Marks OOC = " << s1.getMarksOOC() << endl;
cout << "Marks SPM = " << s1.getmarksSPM() << endl;
cout << "Marks ISDM = " << s1.getmarksISDM() << endl;
cout << "Total Marks = " << s1TM << endl;
cout << "Average Mark = " << setprecision(4) << s1TM/3.0 << endl << endl;

cout << "Student ID = " << s2.getStudentID() << endl;
cout << "StudentName = "<< s2.getstudentName() <<endl;
cout << "Marks OOC = " << s2.getMarksOOC() << endl;
cout << "Marks SPM = " << s2.getmarksSPM() << endl;
cout << "Marks ISDM = " << s2.getmarksISDM()<< endl;
cout << "Total Marks = " << s2TM << endl;
cout << "Average Mark = " << setprecision(4) << s2TM/3.0 << endl << endl;

cout << "Student ID = " << s3.getStudentID() << endl;
cout << "StudentName = "<< s3.getstudentName() <<endl;
cout << "Marks OOC = " << s3.getMarksOOC() << endl;
cout << "Marks SPM = " << s3.getmarksSPM() << endl;
cout << "Marks ISDM = " << s3.getmarksISDM() << endl;
cout << "Total Marks = " << s3TM << endl;
cout << "Average Mark = " << setprecision(4) << s3TM/3.0 << endl;
 
return 0;

}