#include<stdio.h>

int main()
{
	FILE * appointment;
	char type;
	char name[30];
	int c=0,t=0,s=0;
	
	
	
	appointment = fopen("appointment.dat", "r");
	
	if(appointment == NULL)
	{
		printf("file cannot be opened.");
		return -1;
	}
c=0;
	while(!feof(appointment))
	{
		fscanf(appointment,"%s %c",&name,&type);
		
	switch(type)
	{
		
		case 'T':t++;
		break;
		case 'S':s++;
		break;
		case 'C':c=c+1;
		break;	
	}
				
	}
	puts("------------------\t---------------------");
	printf("Appointment type \t Number of Patients\n");
	puts("------------------\t---------------------");
	printf("1.consulting\t\t%d\n",c);
	printf("2.scanning\t\t%d\n",s);
	printf("3.testing\t\t%d\n",t);
	fclose(appointment);
	
	return 0;
}

