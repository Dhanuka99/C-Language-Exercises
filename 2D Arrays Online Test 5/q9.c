#include<stdio.h>

int main(){
	int matrix1[2][2];
	int matrix2[2][2];
	int i,j;
	//input value for matrix 1
	printf("Fist Matrix : \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("Element -");
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("The First Matrix is : \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d ",matrix1[i][j]);
		}
		printf("\n");
	}
	//input value for matrix 2
	printf("Second Matrix : \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("Element -");
			scanf("%d",&matrix2[i][j]);
		}
	}

	printf("The second Matrix is : \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d ",matrix2[i][j]);
		}
		printf("\n");
	}
	printf("The Mutiplication os 2 Matrix : \n");
	
	printf("%d %d\n",(matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0]),(matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1]));
	printf("%d %d\n",(matrix1[1][0]*matrix2[0][0] + matrix1[1][0]*matrix2[1][0]),(matrix1[1][0]*matrix2[0][1] + matrix1[1][1]*matrix2[1][1]));
	
	

	return 0;
}
