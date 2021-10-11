#include<stdio.h>
char fun();//function proto type
int main(){
	
char val = fun();
printf("%c",val);
}

char fun(){
	return 'A';
}
