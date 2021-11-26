#include<stdio.h>
float calIncrement(float,int);
float calPaymentSalary(float,float);
int main(){
	
	float salary;
	int years
	
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	printf("Enter No Of Years Worked : ");
	scanf("%d",&years);
	
	float increment = calIncrement(salary,years);
	float finalSalary = calPaymentSalary(salary,increment);
	printf("Increment : %.2f\n",increment);
	printf("Total Salary : %.2f",finalSalary);
	
	return 0;
}

float calIncrement(float salary,int noOfYearsWorked){
	if(noOfYearsWorked>2){
		return	salary*0.10;
	}else{
		return 0;
	}
}

float calPaymentSalary(float salary,float increment){
	return salary+increment;
}

