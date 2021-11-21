#include<stdio.h>
int main(){
	double sales[5][4];
	int personNumber,productNumber,i=0,j=0;
	float total= 0.00,amount=0.00;
	//inert daily sales amount
	for(personNumber=0;personNumber<4;personNumber++){
		for(productNumber=0;productNumber<5;productNumber++){
			printf("salesperson %d  product %d sold that day $ : ",personNumber,productNumber);
			scanf("%f",&amount);
			total+= amount;
		}
		printf("Total Doller value is : $%.2f",total);
		total = 0.00;
		printf("\n");
	}

	
	return 0;
}
