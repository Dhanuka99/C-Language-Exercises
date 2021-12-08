#include<stdio.h>

int main(){
	int testMarks[10]={-1};
	int marks;
	int i;
	for(i=0;i<=9;i++){
		printf("Enter Marks : ");
		scanf("%d",&marks);
		if(marks<0 || marks>100){
			printf("Invalid mark.. Please Re-Enter..\n");
			i-=1;
		}else{
			testMarks[i]= marks;
		}
		
	}
	printf("\n");
	printf("Input Array : \n");
	for(i=0;i<=9;i++){
		printf("%d ",testMarks[i]);
	}
	printf("\n");
	printf("Passed Marks : \n");
	for(i=0;i<=9;i++){
		if(testMarks[i]>50){
			printf("%d ",testMarks[i]);
		}
		
	}
	printf("\n");
	return 0;
}
