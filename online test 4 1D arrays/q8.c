#include<stdio.h>

int main(){
	
	
	char correctAnswers[6]={'T','F','F','T','F','T'};
	char studentAnswers[6];
	int i;
	for(i=0;i<=5;i++){
		printf("Enter student Answer : ");
		scanf(" %c",&studentAnswers[i]);
	}
	
	printf("\n");
	printf("Correct Answers : \n");
	for(i=0;i<=5;i++){
		printf(" %c",correctAnswers[i]);
	
	}
	
	printf("\n");
	printf("Student Answers : \n");
	for(i=0;i<=5;i++){
		printf(" %c",studentAnswers[i]);
	
	}
	int correct=0;
	for(i=0;i<=5;i++){
		if(correctAnswers[i]==studentAnswers[i]){
			correct+=1;
		}
	}
	printf("\n");
	printf("Number of Correct Answers : %d\n",correct);
	
	
	return 0;
}
