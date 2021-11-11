#include<stdio.h>

int main(){
	

	int i,j,m,n,c,d,city;
	//3 cities and 4 days
	 int rainfall[3][4],maxRainfall[3][4];

   	
   	for (i=0;i<4;i++)
	{
		printf("Enter city %d rainfall deatails !\n\n",i+1);
		
		for (j=0;j<3;j++)
		{
			printf("Enter City %d wheather of Day %d : ",i+1,j+1);
			scanf("%f",&rainfall[i][j]);
		}
		puts("");
	}
	
	  // Initializing max element as INT_MIN
    int maxElement = 0;
 
    // checking each element of matrix
    // if it is greater than maxElement,
    // update maxElement
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (rainfall[i][j] > maxElement ) {
                maxElement  = rainfall[i][j];
            }
        }
    }
 
		printf("Maximum rainfall of the day %d is city %d --> %.2f\n",j+1,city,maxRainfall[j]);
	
	return 0;
}

