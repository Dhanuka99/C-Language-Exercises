/*
Name : R.D.D.L.K JAYASINGHE
ID : IT21184994
Campus : Malabe 
Group : 12.1 sep batch
*/
#include<stdio.h>
int main(){
	//initialized values
	int type,quantity;
	float total=0.00;
	//get buger type from customer
	printf("Enter Buger Type : ");
	scanf("%d",&type);
	//while loop start
	while(type!=-1){
			//get Quantity from customer 
			printf("Enter Quantity : ");
			scanf("%d",&quantity);
			//check the buger type 
			if(type==1){
				total = 500.00*quantity;
				printf("Total Price Rs. %.2f\n",total);
			}else if(type==2){
				total = 500.00*quantity + 50.00*quantity;
				printf("Total Price Rs.  %.2f\n",total);
			}else if(type==3){
				total = 500.00*quantity + 100.00*quantity;
				printf("Total Price Rs.  %.2f\n",total);
			}else{
				//when customer type the incorrect type display below message
				printf("Invalid Type");
			}
			printf("Enter Buger Type : ");
			scanf("%d",&type);
	
	}
	//while loop end
	return 0;
}

