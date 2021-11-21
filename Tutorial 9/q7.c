#include<stdio.h>
#define SIZE 10
int main(){
	
	int marks[SIZE] ;
	int i = 0,number,mean=0,total=0;
	
	while(i<SIZE){
		printf("Enter Number %d :",i+1);
		scanf("%d",&number);
		if(number>0 && number<20){
			marks[i] = number;
			i++;
			total+=number;
		}else{
			continue;
		}
	}
	mean =(float) total/SIZE;
	printf("Display Stored Marks from array\n");
	for(i=0;i<SIZE;i++){
		printf("%d",marks[i]);
		printf("\t");
	}
	printf("\n");
	printf("Mean value is : %.2f",(float)mean);
		return 0;
}
