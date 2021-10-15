#include<stdio.h>

int calculateArea(int,int);//Decl
int main(){
	
	int a = 10,b=5;
	int area;
	area = calculateArea(a,b);
	printf("%d",area);
	
	
	
	return 0;
}

int calculateArea(int a,int b){
	int area = a*b;
	return area;
}
