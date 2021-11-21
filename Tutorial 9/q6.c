#include<stdio.h>
#define SIZE 10
int main(){

	int arr[SIZE];
	int i=0,value,j;
	while(i<SIZE){
		printf("Enter Number : ");
		scanf("%d",&value);
		arr[i] = value;
		i++;
	}
	
	printf("\n");
	printf("Element\tValue\tHistogram\n");
	for(i=0;i<10;i++){
		printf("%d \t%d\t ",i,arr[i]);
		int len = arr[i];
	
		for(j=0;j<len;j++){
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
