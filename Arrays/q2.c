#include<stdio.h>
int total=0;

int sum(int arr[]);

int main(){
	

	int marks[5];
	int num,i;
	
	for(i=0;i<5;i++){
		printf("Enter number");
		scanf("%d",&num);
		
		marks[i] = num;
	}
	
	for(i=0;i<5;i++){
		printf("%d\n",marks[i]);
	}
	
	
	printf("sum is %d",sum(marks));
	
	return 0;
}

int sum(int arr[5]){
	int i;
	for(i=0;i<5;i++){
		total +=  arr[i];
	}
	return (int)total;
}












