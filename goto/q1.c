#include <stdio.h>  
int main()   
{  
	int i = 1;
	while(i<=10){
		if(i==5)
			goto Label;
		printf("%d\n",i);
		i++;
	}
	
	printf("Line Number 12\n");
	printf("Line Number 13\n");
	Label:
	printf("Line Number 14\n");
	printf("Line Number 15\n");
	
}  
