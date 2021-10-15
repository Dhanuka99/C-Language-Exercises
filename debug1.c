#include<stdio.h>

int main(){
	
	int age[4] = {10,20,30,40,};
	
	int i,sum=0;
	
	for(i=0;i<=4;i++){
		sum+=age[i];
	}
	
	printf("%d",sum);
	
	return 0;
}
