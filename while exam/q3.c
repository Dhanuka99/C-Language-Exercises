#include<stdio.h>
//pizza discount
int main(){
	
	int i = 1,type,qty;
	float price = 0.00,total=0.00,t=0.00;
	
	printf("Enter Pizza Type : ");
	scanf("%d",&type);
	
	while(type!=-1){
	
		printf("Enter Quantity : ");
		scanf("%d",&qty);
			
		if(type==1){
			if(qty>3){
				total = qty*1000.00 - (qty*1000.00)*0.01;
			}else{
				total = 1000.00*qty;
			}
		}else if(type==2){
			if(qty>3){
				total = qty*1600.00 - (qty*1600.00)*0.12;
			}else{
				total = 1600.00*qty;
			}
		}else if(type==3){
				if(qty>3){
				total = qty*1400.00 - (qty*1400.00)*0.15;
			}else{
				total = 1400.00*qty;
			}
		}else{
			printf("Invalid Pizza type!");
		}
		printf("Total Price = Rs. %.2f\n",total);
		printf("Enter Pizza Type : ");
		scanf("%d",&type);
}
	
	
	return 0;
}

