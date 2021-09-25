#include<stdio.h>

int main(){
	float salary = 0.0,bonus=0.0;
	int i=1;
	while(i<=5){
		printf("%s%d%s","Enter ",i," Employee Salary : ");
		//enter i employee salary
		scanf("%f",&salary);
		bonus += salary*20/100;
		i++;
	}

	printf("total amount the company is paying %.2f",bonus);

	
	return 0;
}
