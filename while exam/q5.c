#include<stdio.h>
//student marks for 4 module
int main(){
	
	int count,total,marks;
	
	printf("Enter many students are in the module : ");
	scanf("%d",&count);
	int i ,j= 1;
	while(i<=count){
		printf("Enter the marks of student %d (between 0-20)\n",i);
		while(j<=4){
			printf("Mark %d - ",j);
			scanf("%d",&marks);
			j++;
			total+=marks;
		}
		printf("Total Marks - %d\n",total);
		j=1;
		total=0;
		i++;
	}
	
	return 0;
}

