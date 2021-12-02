#include<stdio.h>
#define SIZE 3
int main(){
	
	float item[SIZE] = {90.00,20.00,55.00};
	
	int qtySold[SIZE];
	
	int i,count;
	float income = 0.00,least_income = 0.00,total = 0.00;
	
	for(i=0;i<=2;i++){
		printf("Enter Item %d Quantity : ",i+1);
		scanf("%d",&qtySold[i]);
		
	}
	
	printf("Item Array : \n");
	for(i=0;i<=2;i++){
		printf(" %.2f",item[i]);
	}
	printf("\n");
	printf("Item Quantity : \n");
	for(i=0;i<=2;i++){
		printf(" %d",qtySold[i]);
	}
	
	printf("\n");
	least_income = item[0] * qtySold[0] ;
	for (i = 0 ; i < 3 ; i++){
		total = qtySold[i] * item[i] ;
		if (total < least_income ){
			count = i+1 ;
		}
	}
	printf("\n\nItem which genarate least income : %d" , count);
	
	
	
	
	return 0;
}
