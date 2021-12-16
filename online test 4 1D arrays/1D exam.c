/*
Name : R.D.D.L.K JAYASINGHE
ID : 21184994
Group : 12.01, 2021 september intake
Campus : Malabe Campus
*/
#include<stdio.h>
int main (){
	double salaries[5]={-1};
	double salary=0.00;
	int i;
	double increment=0.00;
	for(i=0;i<=4;i++){
		printf("Input the salary of employee %d : ",i+1);
		scanf("%lf",&salary);
		if(salary<0.0){
			printf("Please Re-Enter the amount..\n");
			i-=1;
		}else{
			salaries[i]= salary;
		}
		if(salaries[i]>10000.00){
			increment = salaries[i]*10/100;
			salaries[i] += increment;
		}
	
	}
	printf("\n");

	printf("Emp. Number\tSalary\n");
	for(i=0;i<=4;i++){	
		printf("%d\t%1f",i+1,salaries[i]);
		printf("\n");
	}
	printf("\n");
	return 0;
}

