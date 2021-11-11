#include<stdio.h>

// 5 round and players
int main(){
	
	int i = 1,j = 1,score;
	char dis;
	float total= 0.00;
	
	
	while(i!='N'){
		printf("Enter The Scores Player %d (between 0-8)\n",i);
		while(j<=5){
			printf("Round %d : ",j);
			scanf("%d",&score);
			j++;
			total+=score;
			
		}
		printf("Player %d Average Score = %.2f\n",i,total/5.0);
		printf("Do you want to enter the score of another player (y/n) ? \n");
		scanf(" %c",&dis);
		
		if(dis=='y' || dis=='Y'){
			i++;
			j=1;
		}else{
			break;
		}
			
		
	}
	
	
	return 0;
}
