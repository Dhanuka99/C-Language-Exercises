#include <stdio.h>
int main(void)
{
    int total ,number,count=1;
    float avg ;

    printf("Enter number : ");
    scanf("%d", &number);

  while(number > -1)
{
   
    total  = total + number ;
    avg =(float) total/count;
    count++;
    printf("%d\n", number);

    printf("Enter number : ");
    scanf("%d", &number);
  }
    printf("You enter numbers total are : %d\n",total);
    printf("Average is :%.1f",avg);
     return 0;
}
