#include<stdio.h>
#include <string.h>
int main(){
	int mainArray[10] = {10,20,23,11,60,56,77,22,90,111};
	
	int evenArray[6];
	int oddArray[4];
	int even,odd=0;
	int i;
	printf("Even Numbers : \n");
	for(i=0;i<=9;i++){
		if(mainArray[i]%2==0){
			printf("%d ",mainArray[i]);
			even++;
		}
	}
	printf("\n");
	printf("Odd Numbers : \n");
	for(i=0;i<=9;i++){
		if(mainArray[i]%2!=0){
			printf("%d ",mainArray[i]);
			odd++;
		}
	}
	printf("\n");
	printf("Count of even number : %d \n",even);
	printf("Count of odd number : %d \n",odd);
	
	
	return 0;
}
