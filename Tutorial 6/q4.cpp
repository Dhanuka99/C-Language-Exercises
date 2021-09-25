#include<stdio.h>

int main(){

	char grade;
	printf("Enter Grade : ");
	scanf("%c",&grade);
	
	if(grade=='A')
		printf("Excellent");
	else if(grade=='B')
		printf("Good");
	else if(grade=='C')
		printf("Satisfactoty");
	else if(grade=='F')
		printf("Need Improvement");
	else
		printf("Not a grade..please type the correct grade\n");
	return 0;
}
