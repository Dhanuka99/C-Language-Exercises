#include<stdio.h>

int main(){
	
	int courseNo,marks;
	float courseFee=0.00,discount=0.00;
	
	printf("Enter Course No :");
	scanf("%d",&courseNo);
	
	printf("Enter Apititude Marks : ");
	scanf("%d",&marks);
	
	if(courseNo==1){
		courseFee=150000;
		if(marks<80){
			printf("Discount : %.2f",discount);
		}else if(marks>=80 && marks<=100){
			discount= courseFee*7.5/100;
			printf("Discount : %.2f\n",discount);
			printf("Course Fee : %.2f\n",courseFee-discount);
		}else{
			printf("invalid marks");
		}
	}else if(courseNo==2){
		courseFee=175000;
		if(marks<80){
			printf("Discount : %.2f\n",discount);
		}else if(marks>=80 && marks<=100){
			discount= courseFee*7.5/100;
			printf("Discount : %.2f\n",discount);
			printf("Course Fee : %.2f\n",courseFee-discount);
		}else{
				printf("invalid marks");
		}
	}else{
			printf("invalid course no");
	}
	
	
	return 0;
	
}
