#include<stdio.h>

int main(){
	int n; arr[100];
	
	scanf("%d",&n);
	
	int i;
	for(i =0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		int j;
		for(j=0; j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=0; i<n;i++)
		printf("%d",arr[i]);
		
	return 0;
}
