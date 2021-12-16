#include<stdio.h>
// lab sheet quection.. student mark case
int main(){
	
	int unitsArray[3][3];
	int i,j;
	for(i=0;i<=2;i++){
		printf("Customer ID %d : \n",i+1);
		for(j=0;j<=2;j++){
			printf("Enter Unit for Month 0%d : ",j+1);
			scanf("%d",&unitsArray[i][j]);
		}
	}
	printf("\n");
	float maxUnit=unitsArray[0][0];
	int customerId,month;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(unitsArray[i][j]>maxUnit){
				maxUnit = unitsArray[i][j];
				customerId = i;
				month = j;
			}
		}
	}
	printf("The Maximum number of electricity units used with customer ID %d and the month %d \n",customerId,month);
	
	
	
	return 0;
}
