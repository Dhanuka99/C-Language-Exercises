using namespace std;
#include <iostream>
class ClassRoom{
private:
    int roomNo;
public:
    ClassRoom(){
        roomNo = 1;
    }
    ClassRoom(int no){
        roomNo = no;
    }
    void displayRoomDetails(){
        cout<<"Class Room Number is : "<<roomNo<<endl;
    }

    ~ClassRoom(){
        cout<<roomNo<<" is destoyed"<<endl;
    }

};
