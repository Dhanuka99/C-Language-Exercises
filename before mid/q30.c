#include<stdio.h>

int main(){
	//calculate basic salary
	int noOfMonth;
	float basicSalary=0.00,bonus=0.00;
	
	printf("Enter number of month : ");
	scanf("%d",&noOfMonth);
	
	printf("Enter Basic Salary :");
	scanf("%f",&basicSalary);
	
	if(noOfMonth<=6){
		printf("basic salary %.2f\n",basicSalary);
		printf("No bonus %.2f ",bonus);
	}else if(noOfMonth>6){
		if(noOfMonth==12 && basicSalary<=45000){
		bonus= ((noOfMonth*basicSalary)/noOfMonth)+basicSalary;
		printf("basic salary %.2f\n",basicSalary);
		printf("Bonus %.2f\n",bonus);
	}else{
			printf("basic salary %.2f\n",basicSalary);
		bonus= noOfMonth*basicSalary;
		printf("nonus %.2f\n",bonus);
	}
	
		
		
	}else{
		printf("invalid no of month");
	}
	
	
	
//	printf("basic salary %.2f\n",basicSalary);
//	printf("nonus %.2f\n",bonus);
	
}
