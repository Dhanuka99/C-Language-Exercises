#include <iostream>
#include<string.h>
using namespace std;
class Course{
	public:
		int courseID;
		string courseName;
		int creditPoints;
	
		void displayBookDetails(){
			cout<<courseID<<" "<<courseName<<" "<<creditPoints<<endl;
		};
		void creditPoint(int point){
			courseID = point;
		};
};

int main(){
	
	for(int i=0;i<=3;i++){
		
	}
	return 0;
}
