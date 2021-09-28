#include<stdio.h>

int main(){

	int num;
	printf("Input number :");
	scanf("%d",&num);
	
	int a,b,c,d,e,f;

	a = num;
	b = a/10000;
	c = a/1000%10;
	d = a/100%10;
	e = a/10%10;
	f = a%10;
	
	printf("%d\t%d\t%d\t%d\t%d\n",b,c,d,e,f);
	return 0;
}
