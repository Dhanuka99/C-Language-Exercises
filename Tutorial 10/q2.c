#include<stdio.h>
int main(void)
{
	
    char type;
    
    char name[ 30];
    int i;
    
    FILE*appointment;
    
    appointment = fopen("appointment.dat", "w");
    
    
    if (appointment == NULL)
    {
        printf("File cannot be open");
        return -1;
        
    }
    
    for(i = 1; i < 6; ++i)
    {
    	
        printf("\nEnter the patient name : ");
        scanf("%s", &name);
        printf("Enter the appointment type :");
        scanf(" %c", &type);

        fprintf(appointment, "%s\t\t%c\n", name, type);
    }

    fclose(appointment);
    return 0;
}

