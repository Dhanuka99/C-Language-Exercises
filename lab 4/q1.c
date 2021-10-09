#include<stdio.h>
#include<math.h>

int main(){
	
	char shep;
	float width,length,area;
	
	printf("Input Character of shep (R,T,C) :");
	scanf("%c",&shep);
	
	if(shep == 'r' || shep == 'R'){
	printf("Input Width :");
	scanf("%f",&width);
	printf("Input length :");
	scanf("%f",&length);
	area = width*length;
	}else if(shep == 't' || shep == 'T'){
	printf("Input base :");
	scanf("%f",&width);
	printf("Input height :");
	scanf("%f",&length);
	area = (width*length)/2;
	}else if(shep == 'c' || shep == 'C'){
	printf("Input radius :");
	scanf("%f",&length);
	area = M_PI*length*length;
	}else{
	printf("Invalid character..");
	}
	
	printf("Area is %.2f",area);
	return 0;
}
