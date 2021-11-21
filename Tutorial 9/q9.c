#include<stdio.h>
int main(){
	double sales[5][4];
	int personNumber,productNumber,i,j;
	float amount= 0.00;
	//insert values
	for(i=0;i<20;i++){
		printf("Enter salesperson number (0-4) : ");//0
		scanf("%d",&personNumber);
		printf("Enter product number (0-5) : ");//0
		scanf("%d",&productNumber);
		printf("Enter Your Sales Amount ");
		scanf("%f",&amount);
		sales[personNumber][productNumber] = amount;
	}
	printf("\n");
	//print sales report
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%.2f ",sales[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
