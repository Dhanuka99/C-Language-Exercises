#include<stdio.h>
#define SIZE 5
int main(){
	
	char seat[SIZE] = {'0'};
	int seatNumber;
	printf("Plz input the seat number (1-10) : ");
	scanf("%d",&seatNumber);
	int i=0;
	while(seatNumber!=-1){
		
		if(seat[seatNumber]== 1){
			printf("The seat %d is reseved\n",seatNumber);
		}else{
			seat[seatNumber] = 1;
		}
		if(seatNumber>SIZE){
			printf("Sorry, Please input valid seat number \n");
		}
		printf("Plz input the seat number (1-10) : ");
		scanf("%d",&seatNumber);
		i++;
	}
	return 0;
}
