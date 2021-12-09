#include<stdio.h>
//rainfall case
int main(){
	

	int rainfall[3][4];
	int i,j;
	int maxRainfall[3];
	
	for(i=0;i<=2;i++){
		printf("DAY %d : \n",i+1);
		for(j=0;j<=3;j++){
			printf("Enter number of rainfall %d City : ",j+1);
			scanf("%d",&rainfall[i][j]);
		}
	}

	int total = 0.00;
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			total += rainfall[i][j];
		}
		maxRainfall[i]=total;
		total=0.00;
	}
	printf("\n");
	printf("Record the rainfall 0f 4 cities in sri lanka for 3 days : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			printf("%d ",rainfall[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Display the maximum rainfall of each day : \n");
	for(i=0;i<=2;i++){
		printf("%d ",maxRainfall[i]);
	}
	
	return 0;
}
