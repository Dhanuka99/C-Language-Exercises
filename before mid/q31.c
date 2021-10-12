#include<stdio.h>

int main(){
	
	int bookType,days;
	float amount=0.00;
	
	printf("Enter Book Type :");
	scanf("%d",&bookType);
	
	printf("Enter no of rented days :");
	scanf("%d",&days);
	
	if(bookType==1){
		if(days>14){
			amount = days*10.00; 
			float new =amount*10/100 + amount;
			printf("Rental per day : %.2f\n",10.00);
			printf("Rental Amount : %.2f\n",new);
		}else{
			amount = days*10.00;
			printf("Rental per day : %.2f\n",10.00);
			printf("Rental Amount : %.2f\n",amount);
		}
	}else if(bookType==2){
		if(days>14){
			amount = days*8.00+(amount*10/100);
			printf("Rental per day : %.2f\n",8.00);
			printf("Rental Amount : %.2f\n",amount);
		}else{
			amount = days*8.00;
			printf("Rental per day : %.2f\n",8.00);
			printf("Rental Amount : %.2f\n",amount);
		}
	}

	 return 0;
	
}
