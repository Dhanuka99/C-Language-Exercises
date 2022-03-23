

int main(){
	int mainArray[10]  = {10,20,23,11,60,56,77,22,90,111};
	int oddarray[4] ={0};
	int evenArray[6] ={0};
	int even,odd=0;
	int i;
	for(i=0;i<=9;i++){
		if(mainArray[i]%2==0){
			evenArray[i]=  mainArray[i];
			even++;
		}
	}
	for(i=0;i<=9;i++){
		if(mainArray[i]%2!=0){
			oddarray[i]=  mainArray[i];
			odd++;
		}
	}
	
	
	
	printf("Main arrany \n");
	for(i=0;i<=9;i++){
		printf("%d ",mainArray[i]);
	}
	printf("\n");
	
	printf("Even arrany \n");
	for(i=0;i<=5;i++){
		printf("%d ",evenArray[i]);
	}
	printf("even numbers is : %d\n",even);
	printf("odd numbers is : %d\n",odd);
	
	printf("odd arrany \n");
	for(i=0;i<=4;i++){
		printf("%d ",oddarray[i]);
	}
}
