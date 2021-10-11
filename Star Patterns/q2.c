#include<stdio.h>

int main(){
	int i=1,j=1;
	int n;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==n || j==1||j==n || j==n-i+1||i==j){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
    return 0;
}

