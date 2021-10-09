#include<stdio.h>

int main(){
	
	int i = 1,mark,total=0;
	
	while(i<=4){
	
		printf("Enter %d Module Mark :",i);
		scanf("%d",&mark);
		total+=mark;
		i++;
	}
	
	printf("Total = %d",total);

    return 0;
}

