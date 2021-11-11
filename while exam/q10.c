#include<stdio.h>
//player and scores
int main(){
	
	int count,i=1,j=1,score,total;
	
	printf("Input number of players : ");
	scanf("%d",&count);
	
	while(i<=count){
		printf("Input Player number : %d\n",i);
		while(j<=3){
			printf("Input Score %d : ",j);
			scanf("%d",&score);
			total += score;
			j++;
		}
		printf("Total Score : %d\n",total);
		j=1;
		i++;
		total=0;
		
	}
		
	return 0;
}

