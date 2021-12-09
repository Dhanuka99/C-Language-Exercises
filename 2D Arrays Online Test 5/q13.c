#include<stdio.h>
//pass paper bulb case
int main(){
	
	char bulbs[4][4];
	int i,j;
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("Enter Bulb Color : ");
			scanf(" %c",&bulbs[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf(" %c",bulbs[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			if(bulbs[i][j]=='R'|| bulbs[i][j]=='r'){
				printf("[%d,%d] ",i,j);
			}
		}
	}
	
	return 0;
}
