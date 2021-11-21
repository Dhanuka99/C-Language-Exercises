#include<stdio.h>
#define SIZE 5
int main(){
	
	int motion[SIZE];
	int i = 0,j,value,last;
	//int length = sizeof(motion)/sizeof(motion[0]);    
	while(i<=SIZE){
		printf("Enter Number : ");
		scanf("%d",&value);
		motion[i] = value;
		i++;
	}
	
	printf("Initial Value \t");
	for(i=0;i<=SIZE;i++){
		printf("%d\t",motion[i]);
	}
	printf("\n");
	last = motion[0];
	printf("After Rotating \t");
	
	for(i=0;i<=SIZE-1;i++){
		motion[i] = motion[i+1];
		printf("%d\t",motion[i]);	
	}
	printf("%d\t",last);

	return 0;
}
