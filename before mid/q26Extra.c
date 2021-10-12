#include<stdio.h>
int main (void)
{
    int period,times;
    float amount;
    char peak;
    
    printf("time period:");
    scanf("%d",&period);
    
    printf("Number of times:");
    scanf("%d",&times);
    
    if (period<45)
    {
        printf("Peak time(Y/N):");
        scanf(" %c",&peak);
        
        if (peak=='Y')
        {
            printf("%.2f",1.2*7500*times);
        }
}
        
    return 0;
}
