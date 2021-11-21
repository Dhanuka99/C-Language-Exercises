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
		/*	printf("Range out of bound.\n");
			printf("Enter Number %d :",i);
			scanf("%d",&number);*/
		continue;
		}
		
	}
		return 0;
}
