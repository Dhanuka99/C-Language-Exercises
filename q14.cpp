#include<stdio.h>

int main(){
	int mark;
	printf("input Marks :");
	scanf("%d",&mark);
	
	(mark>=75) ? printf("A") : (mark>=50) ? printf("B") : (mark>=30) ? printf("C") : printf("F");
	
	return 0;
}
