#include<stdio.h>

int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			printf("%d%c",j," ");
		}
		printf("\n");
	}
	return 0;
}
