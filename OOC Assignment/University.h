#include "ClassRoom.h"
#define SIZE 2
class University{
	private:
		ClassRoom *room[SIZE];
	public:
		University(){
			room[0] = new ClassRoom(101);
			room[1] = new ClassRoom(102);
		};
		
		University(int no1,int no2){
			room[0] = new ClassRoom(no1);
			room[1] = new ClassRoom(no2);
		};
		
		void displayClassRoom(){
			for(int i=0;i<SIZE;i++){
				room[i]->display();
			}	
		};
		
		~University(){
			cout<<"University shutting down "<<endl;
			for(int i=0;i<SIZE;i++){
				delete room[i];
				cout<<"The end"<<endl;
			}
		}
};
