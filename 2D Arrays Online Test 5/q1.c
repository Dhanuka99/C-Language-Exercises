#include<stdio.h>
//chocolate balls size averages 
int main(){
	
	float size[3][5];
	float avgSize[3];
	
	float avg=0.00;
	int i,j;
	
	for(i=0;i<=2;i++){
		printf("Machine %d : \n",i+1);
		for(j=0;j<=4;j++){
			printf("Size of the chocolate ball %d : ",j+1);
			scanf("%f",&avg);
			size[i][j] = avg;
		}
	}
	
	printf("\n");
	printf("Display Average sizes of chocolate balls : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=4;j++){
			printf("%.2f ",size[i][j]);
		}
		printf("\n");
	}
	
	
	float total = 0.00;
	for(i=0;i<=2;i++){
		for(j=0;j<=4;j++){
			total += size[i][j];
		}
		avgSize[i]=total/5.0;
		total = 0;
	}
		printf("\n");
	printf("Display Average size of each value : \n");
	for(i=0;i<=2;i++){
		printf("%.2f ",avgSize[i]);
	}
	
	
	return 0;
}
