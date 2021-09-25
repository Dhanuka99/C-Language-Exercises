#include <stdio.h>

int main(){
	int x = 2,y=3;
	printf( "*\n**\n***\n****\n*****\n " );
	printf("%d\n",x+x);
	printf("x=\n");
	printf("%d = %d", x+y, y+x);
	/* printf( “%d”, x+y ); */
	printf("\n");
	printf(" %.2f\n", 3.446);
	printf("%.1f\n", 3.446);
	printf("%.3f\n",3.14159);
 	printf ("%-15.1f \n", 333.546372);
 	printf("%15.15f\n",333.546372);
	return 0;
}
