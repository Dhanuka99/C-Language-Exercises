#include<stdio.h>

int main(){
	int i,n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("%d%s%d%s%d%s",n,"x",i," = ",n*i,"\n");
	}
	return 0;
}
