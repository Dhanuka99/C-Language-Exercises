#include<stdio.h>

int main(){
	int i;
	char myArray[6] = {'S','c','h','o','o','l'};
	
	myArray[0] = '*';
	myArray[1] = '*';
	myArray[3] = '*';
	myArray[4] = '*';
	
	for(i=0;i<=5;i++){
		printf(" %c",myArray[i]);
	}
	
	
	return 0;
	
}
