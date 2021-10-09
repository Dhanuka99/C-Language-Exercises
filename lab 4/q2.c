#include<stdio.h>

int main(){
	
	char pkg;
	int people;
	float costPerPerson,totalCost;
	
	printf("1-Hourse | Ride 2- Scuba diving | 3 - water rafting\n");
	printf("Input your package type (1,2,3) :");
	scanf("%c",&pkg);
	
	if(pkg == '1'){
	printf("Input number of peoples :");
	scanf("%d",&people);
	costPerPerson = 2000.00;
	totalCost = costPerPerson*people;
	}else if(pkg == '2'){
	printf("Input number of peoples :");
	scanf("%d",&people);
	costPerPerson = 5000.00;
	totalCost = costPerPerson*people;
	}else if(pkg == '3'){
	printf("Input number of peoples :");
	scanf("%d",&people);
	costPerPerson = 7000.00;
	totalCost = costPerPerson*people;
	}else{
	printf("Invalid character..");
	}
	
	printf("Your Total cost for %d Peoples :  %.2f",people,totalCost);
	return 0;
}
