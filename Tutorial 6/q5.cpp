#include<stdio.h>

int main(){
	//using switch
	char grade;
	printf("Enter Grade : ");
	scanf("%c",&grade);
	
	switch(grade){
		case 'A':
			printf("Excellent");
			break;
		case 'B':
			printf("Good");
			break;
		case 'C':
			printf("Satisfactory");
			break;
		case 'F':
			printf("Need Improvement");
			break;
		default :
			printf("Not a grade");
			break;
		
		
	}

	return 0;
}
