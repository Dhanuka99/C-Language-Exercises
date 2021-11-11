#include<stdio.h>
//student marks 
int main(){
	
	int i = 1,j=1,marks;
	float total=0.00;
	char dis;
	
	while(i!='N'){
		
		printf("Enter the marks of student %d (between 0-20)\n",i);
		while(j<=4){
			printf("Mark %d - ",j);
			scanf("%d",&marks);
			j++;
			total += marks;
		}
		printf("Total marks - %.2f\n",total);
		printf("Do you want to enter mark of another student (Y/N) ?\n");
		scanf(" %c",&dis);
		if(dis=='y'|| dis=='Y'){
			j=1;
			total = 0;
			i++;
		}else{
			break;
		}
		
	}
	
	return 0;
}

