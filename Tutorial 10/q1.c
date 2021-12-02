#include<stdio.h>

int main()
{
	FILE * fp;
	int num, user, identify = 1;
	
	printf("Enter a number : ");
	scanf("%d", &user);
	
	fp = fopen("number.dat", "w");
	fprintf(fp, "%d %d %d %d %d %d", 10, 21, 71,12 ,98, 41);
	if(fp == NULL){
		printf("\nfile cannot be opened.");
		return -1;
	}
	fclose(fp);
	
	fp = fopen("number.dat", "r");
	while(!feof(fp)){
		fscanf(fp, "%d", &num);
		if(user == num){
			identify = 0;
		}		
	}
	fclose(fp);
	
	if(identify == 0){
		printf("the value is already there..");
		printf(" |%d|\n" , user);
	}else{
		fp = fopen("number.dat", "a");
		fprintf(fp, "  %d ", user);
		fclose(fp);
	}
	printf("\n");
	fp = fopen("number.dat", "r");
	while(!feof(fp)){
		fscanf(fp, "%d", &num);
		printf(" %d ", num);
	}
	fclose(fp);
	return 0;
}

