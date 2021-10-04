#include<stdio.h>

int main(){
	
	int a = 1,sum=0,num;
	
	while(a<=10){
		printf("Enter %d%s",a," Number :");
		scanf("%d",&num);
		sum += num;
		a++;
	}
	printf(" Sum is  : %d",sum);
	return 0;
}
