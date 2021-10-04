#include<stdio.h>

int main(){
	
	char trType;
	float bankBalance = 1500.00,dipoAmount,withdraw;
	
	printf("Select the Transaction Type (Withdrawal-w/Deposit-d) :");
	trType = getchar();
	
	if(trType=='w'){
		printf("You have selected to withdraw money\n");
		printf("Your Current Balance : %.2f\n",bankBalance);
		printf("Enter Your withdrawal Amount :");
		scanf("%f",&withdraw);
		printf("Your Withdraw amount is : %.2f\n",withdraw);
		printf("Your New Total Balance is : %.2f",bankBalance-withdraw);
	}
	else if(trType=='d'){
		printf("You have selected to deposit money\n");
		printf("Your Current Balance : %.2f\n",bankBalance);
		printf("Enter Your Deposit :");
		scanf("%f",&dipoAmount);
		printf("Your New Total Balance is : %.2f",bankBalance+dipoAmount);
	}
	else{
		printf("You have selected an invalid transaction type\n");
	}
	
	
	return 0;
}
