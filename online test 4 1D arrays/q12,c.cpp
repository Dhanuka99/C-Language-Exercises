#include<stdio.h>
#include<string.h>
struct Customer{
	int accountNumber;
	char name[10];
	char accountType;
	float amount;	
	};
int main(){

	struct Customer Customer[5];
	float totalWithdrawal=0.00,totalDeposit = 0.00;
	float depositMax=0.00,withdrawMin= 0.00;
	char nameDepMax[10];
	char nameWithMin[10];
	
	int i;
	for(i=0;i<=4;i++){
		printf("Account Number : ");
		scanf("%d",&Customer[i].accountNumber);
		printf("Enter Name : ");
		scanf("%s",&Customer[i].name);
		printf("Account Type : ");
		scanf("%s",&Customer[i].accountType);
		printf("Amount : ");
		scanf("%f",&Customer[i].amount);
		printf("\n");
		if(Customer[i].accountType=='d' || Customer[i].accountType=='D'){
			totalDeposit+=Customer[i].amount;
			if(Customer[i].amount>depositMax){
				depositMax=Customer[i].amount;
				strcpy(nameDepMax,Customer[i].name);
		}
		}else if(Customer[i].accountType=='W' || Customer[i].accountType=='w'){
			totalWithdrawal+=Customer[i].amount;
			withdrawMin=Customer[i].amount;
			if(Customer[i].amount>withdrawMin){
				
			}else{
				withdrawMin=Customer[i].amount;
				strcpy(nameWithMin,Customer[i].name);
			}
		}else{
			printf("Invalid Transaction Type");
		}
	}
	
	
	
	printf("Total Deposite Amount : %.2f\n",totalDeposit);
	printf("Total Withdrawal Amount : %.2f\n",totalWithdrawal);
	printf("Name of the Customer who has deposit the maximim amount : %s\n",nameDepMax);
	printf("Name of the Customer who has Withdrawal the minimum amount : %s\n",nameWithMin);
	
	
	
	return 0;
}
