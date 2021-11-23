#include<stdio.h>
float calculateWeeklySalary(int,float);
float calculatehours(int);
void printDetails(int,float,float);
int main(){
	
	int grade;
	float hrs;
	
	printf("Enter Grade : ");
	scanf("%d",&grade);
	
	printf("Enter Worked Hours : ");
	scanf("%f",&hrs);
	

	float calhrs = calculatehours(grade);
	float weekSalary = calculateWeeklySalary(hrs,calhrs);
	printf("\n");
	printDetails(grade,calhrs,weekSalary);
	return 0;
}

float calculateWeeklySalary(int grade,float hrsWorked){
	return grade*hrsWorked;
}

void printDetails(int grade,float workedHrs,float salary){
	printf("GRADE\tPay to One hour Salary\n");
	printf("%d\t%.2f      \t%.2f", grade,workedHrs,salary);
}

float calculatehours(int grade){
		switch(grade){
		case 1:
			return 100.00;
			break;
		case 2:
			return 200.00;
			break;
		case 3:
			return 300.00;
			break;
		default :
			break;
	}
}

