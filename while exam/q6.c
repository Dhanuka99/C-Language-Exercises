#include<stdio.h>
//Item and quantity
int main(){
	
	int item,qty;
	float total=0.00;
	
	printf("Enter Item :");
	scanf("%d",&item);
	
	while(item!=-99){
		printf("Enter Quantity :");
		scanf("%d",&qty);
		if(item==1){
			total+=30.00*qty;
		}else if(item==2){
			total+=45.00*qty;
		}else if(item==3){
			total+=55.00*qty; 
		}else{
			printf("Invalid Item Code");
		}
		printf("Enter Item :");
		scanf("%d",&item);
	}
	printf("Total Price to pay Rs. %.2f",total);
	
	return 0;
}

