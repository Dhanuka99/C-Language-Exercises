#include<stdio.h>

int main(){
	//create 
	int matrix1[4][4] = {{5,7,8,10},{9,3,0,6},{8,1,9,2},{4,7,2,1}};
	int matrix2[4][4] = {{2,2,1,3},{8,1,3,1},{1,2,2,4},{3,1,1,2}};
	
	int i,j;
	//row
	printf("Matrix 1 Output\n");
	for(i=0;i<=3;i++){
		//column
		for(j=0;j<=3;j++){
			printf("%d ",matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		//row
	printf("Matrix 2 Output\n");
	for(i=0;i<=3;i++){
		//column
		for(j=0;j<=3;j++){
			printf("%d ",matrix2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
		//row
	printf("Total Output\n");
	for(i=0;i<=3;i++){
		//column
		for(j=0;j<=3;j++){
			printf("%d ",matrix1[i][j]+matrix2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
