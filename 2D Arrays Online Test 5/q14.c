#include<stdio.h>
//pass paper bulb case
int main(){
	
	int rating[3][4];
	float highestArray[3];
	int i,j;
	for(i=0;i<=2;i++){
		printf("Movie %d :\n",i+1);
		for(j=0;j<=3;j++){
			printf("Enter Reviwers : ");
			scanf("%d",&rating[i][j]);
		}
	}
	printf("\n");
	printf("Display the array : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			printf("%d ",rating[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int total ;
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			total +=rating[i][j];
		}
		printf("Movie Number is %d and average rating is %.2f\n",i,total/4.0);
		highestArray[i] = total/4.0;
		total=0;
		printf("\n");
	}
	
	printf("\n");
	float highest = highestArray[0];
	for(i=0;i<=2;i++){
		if(highestArray[i]>highest){
			highest = highestArray[i];
		}		
	}
	printf("The Movie which received highest average rating : %.2f ",highest);
	printf("\n");
	
	
	
	return 0;
}
