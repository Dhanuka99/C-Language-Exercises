#include<stdio.h>
//buger case
int main(){
	
	int type,qty;
	float total=0.00;
	
	printf("Enter Buger Type : ");
	scanf("%d",&type);
	
	while(type!=-1){
			printf("Enter Quantity : ");
			scanf("%d",&qty);
			if(type==1){
				total = 500.00*qty;
				printf("Total Price Rs. %.2f\n",total);
			}else if(type==2){
				total = 500.00*qty + 50.00*qty;
				printf("Total Price Rs.  %.2f\n",total);
			}else if(type==3){
				total = 500.00*qty + 100.00*qty;
				printf("Total Price Rs.  %.2f\n",total);
			}else{
				printf("Invalid Type");
			}
			printf("Enter Buger Type : ");
			scanf("%d",&type);
	
	}
	
	return 0;
}

