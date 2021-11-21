#include<stdio.h>

int main(){
	
	
	int marks[10] ;

	int i = 0,number;
	
	while(i<=10){
		printf("Enter Number %d :",i);
		scanf("%d",&number);
		if(number>0 && number<20){
			marks[i] = number;
			i++;
		}else{
			continue;
		}
		
	}
	printf("Display Stored Marks from array\n");
	for(i=0;i<=10;i++){
		printf("%d",marks[i]);
		printf("\t");
	}
		return 0;
}
