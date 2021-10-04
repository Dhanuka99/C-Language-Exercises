#include<stdio.h>

int main(){
	int grade;
	
	printf("Enter Grade : ");
	grade = getchar();
	
	switch(grade){
		case 'A':
			printf("Gold winner");
			break;
		case 'B' :
			printf("silver winner");
			break;
		case 'C' :
			printf("Brovnce winner");
			break;
		default :
			printf("Invalid grade..");
			break;
	}
}
