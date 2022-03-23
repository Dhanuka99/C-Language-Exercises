#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  	int arr[] = {12,45,67,34,23,78,50,45,34,23};
  	int arr2[]={0};
	
	int length = sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<length;i++){
		for(j=i+1;j<length;j++){
			if(arr[i]==arr[j]){
				arr2[i] = arr[j];
			}
		}
	}
	
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
