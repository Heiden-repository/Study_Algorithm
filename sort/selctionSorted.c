#include <stdio.h>

int main(){
	int n;
  	int data[100];
  
  	scanf("%d",&n);
  
 	int i;
  	for(i = 0; i < n ; i++){
  		scanf("%d",&data[i]);
	}
	
	for(i = 0; i<n; i++){
		int inx = i;
		int j;
		for(j=i; j < n; j++){
			if(data[inx]> data[j]){
				inx = j;
			}
		}
		
		int temp;
		temp = data[i];
		data[i] = data[inx];
		data[inx] = temp;
	}
	
	for(i = 0; i<n; i++)
		printf("%d ",data[i]);
	return 0;
}
