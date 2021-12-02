#include<stdio.h>

int main(){
	
	int team1[3] = {8,3,7};
	int team2Score,team1Score;
	int team2[2];
	int i;
	for(i=0;i<=2;i++){
		printf("Enter %d round score for team2 : ",i+1);
		scanf("%d",&team2[i]);
		team2Score = team2Score+team2[i];
	}
	
	printf("Team 1 : \n");
	for(i=0;i<=2;i++){
		printf(" %d",team1[i]);
		team1Score = team1Score + team1[i];
	}
	printf("\n");
	printf("Team 2 : \n");
	for(i=0;i<=2;i++){
		printf(" %d",team2[i]);
	}
	printf("\n");
	printf("Winners :\n");
	for(i=0;i<=2;i++){
		if(team1[i]>team2[i]){
			printf("Round %d : team 1",i+1);
			printf("\n");
		}else{
			printf("Round %d : team 2",i+1);
			printf("\n");
		}		
	}
	
	if(team1Score>team2Score){
		printf("Overall winner Team 1 ");
	}else{
		printf("Overall winner Team 2 ");
	}
	
	return 0;
}
