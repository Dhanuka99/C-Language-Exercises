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
	printf("The Addition os 2 Matrix : \n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d ",matrix1[i][j]+matrix2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
