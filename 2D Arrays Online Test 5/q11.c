#include<stdio.h>

int main(){
	
	int matrix[2][2];
	int i,j;
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("Element -");
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix Diagonal is : \n");
	printf("%d\n",matrix[0][0]+matrix[1][1]);
	
	
	
	
	return 0;
}
