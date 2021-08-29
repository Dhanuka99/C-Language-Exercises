#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	int i;
	printf("Enter Name :");
	scanf("%s",name);
	
	
	int wordLength = strlen(name);
	printf("Word Length : %u\n",wordLength);
	
	
	for(i=wordLength-1;i>=0;i--){
		printf("%c",name[i]);
	}
	printf("\n");
	
	printf("using method : %s",strrev(name));
	return 0;
}
