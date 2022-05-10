#include "Profile.h"
#include<iostream>
#include<cstring>
using namespace std;

//default constructor
Profile::Profile(){
	strcpy(profileID,"0000");
	strcpy(profileName,"No name");
	visibility='T';
	strcpy(createDate,"No create date");
	Type='S';
	strcpy(lastUpdateDate,"No last date");
}
//parameterized constructor
Profile::Profile(char ID[30],char Name[30],char visi,char CDate[30],char type,char LDate[30]){
	strcpy(profileID,ID);
	strcpy(profileName,Name);
	visibility=visi;
	strcpy(createDate,CDate);
	Type=type;
	strcpy(lastUpdateDate,LDate);
	
}

void Profile::displayProfile(){
	cout<<"Profile ID = "<<profileID<<endl;
	cout<<"Profile Name = "<<profileName<<endl;
	cout<<"Visibility = "<<visibility<<endl;
	cout<<"Create Date = "<<createDate<<endl;
	cout<<"Type = "<<Type<<endl;
	cout<<"last Date = "<<lastUpdateDate<<endl;
}
