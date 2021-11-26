#include<stdio.h>

int main(){
	
	int matrix1[3][3];
	int i,j,number=0;
	
	for(i = 0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("element-[%d],[%d] : ",i,j);
			scanf("%d",&number);
		}
	}
	
	printf("The 2D array is : \n");
	for(i = 0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d",matrix1[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
	
}



