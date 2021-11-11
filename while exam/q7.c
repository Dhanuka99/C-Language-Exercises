#include<stdio.h>
//item and quantity
int main(){
	
	int item,qty;
	float total = 0.00;
	
	printf("Enter Item : ");
	scanf("%d",&item);
	
	while(item!=-1){
		printf("Enter Quantity : ");
		scanf("%d",&qty);
		
		if(item==1){
			total += 300.25*qty;
		}else if(item==2){
			total += 145.50*qty;
		}else if(item==3){
			total += 525.00*qty;
		}else{
			printf("Invalid Item Code");
		}
		printf("Enter Item : ");
		scanf("%d",&item);
	}
	
	printf("Total price to pay Rs: %.2f",total);
	
	return 0;
}

