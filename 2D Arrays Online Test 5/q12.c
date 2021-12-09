#include<stdio.h>

int main(){
	
	int marks[3][4];
	int i,j;
	for(i=0;i<=2;i++){
		printf("Student %d\n",i+1);
		for(j=0;j<=3;j++){
			printf("Student Grades -");
			scanf("%d",&marks[i][j]);
		}
	}
	printf("Student marks : \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			printf("%d ",marks[i][j]);
		}
		printf("\n");
	}
	int highGrade=0;
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			if(marks[i][j]>highGrade){
				highGrade=	marks[i][j];
			}
		}
	}
	
	printf("Highest Grade : %d\n",highGrade);
	
	int lowGrade=marks[0][0];
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			if(marks[i][j]<lowGrade){
				lowGrade=marks[i][j];
			}else{
				
			}
		}
	}
	printf("Lowest Grade : %d\n",lowGrade);
	
	float total;
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			total += marks[i][j];
		}
		printf("The average grade for student %d is %.2f \n",i,total/4.0);
		total=0;
	}

	return 0;
}
