#include "ClassRoom.h"
using namespace std;
#include <iostream>
class University{
private:
    ClassRoom *room[3];
public:
    University(){
        room[0] = new ClassRoom(10);
        room[1] = new ClassRoom(11);
        room[2] = new ClassRoom(12);
    }

    University(int no1,int no2,int no3){
    	cout<<"University Build"<<endl;
       room[0] = new ClassRoom(no1);
        room[1] = new ClassRoom(no2);
        room[2] = new ClassRoom(no3);
    }

    void displayDetails(){
        for(int i=0;i<=2;i++){
            room[i]->displayRoomDetails();
        }
    }

    ~University(){
        cout<<"University Destroyed"<<endl;
        for(int i=0;i<=2;i++){
            delete room[i];
        }
    }
};
