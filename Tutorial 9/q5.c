#include<stdio.h>
#define SIZE 10
int main(){
	
	int count[SIZE] ={0};
	int i = 0,location=0,number,c,max=0;
	
	while(i<=SIZE){
		printf("Enter Number %d (between 10 to 100): ",i+1);
		scanf("%d",&number);
		if(number>10 && number<100){
			count[i] = number;
			if(max<count[i])
				max=count[i];
			i++;
		
		}
	}
	
/*	 for (c = 1; c < SIZE; c++){
	 	if (count[c] > count[location]){
	 		location = c;
		 }
      	
	 }
    	
	printf("max value is %d",count[location]);
	*/
	
		printf("max value is %d",max);
	return 0;
}
