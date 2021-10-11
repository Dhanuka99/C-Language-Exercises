#include<stdio.h>

int main(){
	
	int i,j ;
	for(i=1;i<=7;i++){
		for(j=1;j<=i;j++){
			
			printf("*");
		}
		printf("\n");
	}
	
	int a,b,z=7;
	
	for(a=1;a<=4;a++){
		for(b=z;b>=1;b--){
			printf("*");
			
		}
		printf("\n");
		z=z-2;
	}
	
    return 0;
}

