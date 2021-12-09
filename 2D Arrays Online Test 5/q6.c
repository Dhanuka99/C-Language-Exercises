#include<stdio.h>

int main(){
	
	int matrix[3][3];
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("Element -");
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The Matrix is : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
