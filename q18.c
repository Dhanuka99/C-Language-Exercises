#include<stdio.h>

int main(){

	int a = 1;
	 
	 do{
	 	if(a==3){
	 		a++;
	 		continue;
		 }
		 
		 printf("a value is : %d\n",a);
		 a++;
	 }while(a<=5);
	

	return 0;
}
