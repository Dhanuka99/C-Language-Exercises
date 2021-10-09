#include<stdio.h>

int main(){
	
	int i = 1,j=1,mark,total=0,temp=0;
	char name[20];
	
	while(j<=3){
		
		printf("Enter %d student name :",j);
		
		scanf("%s",&name);
		
		while(i<=4){
	
		printf("Enter %d Module Mark :",i);
		scanf("%d",&mark);
		total+=mark;
		i++;
	     }
	     	printf(" %s Total = %d\n",name,total);
	     	if(total>temp){
			temp=total;
			}
	     	total=0;
			j++;
			i=1;
			
	}
	printf("highest mark is %d",temp);
	
    return 0;
}

