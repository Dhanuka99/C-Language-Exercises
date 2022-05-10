class Profile{
	private:
		char profileID[30];
		char profileName[30];
		char visibility;
		char createDate[30];
		char Type;
		char lastUpdateDate[30];
		
	public:
		//default constructor
		Profile();
		//parameterized constructor
		Profile(char ID[30],char Name[30],char visibility,char CDate[30],char type,char LDate[30]);
		void displayProfile();
};
