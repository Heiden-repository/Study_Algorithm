#include <stdio.h>

int main(){
	int n, data[100];
	
	scanf("%d",&n);
	int i;
	for(i=0 ; i<n; i++)
		scanf("%d",&data[i]);
		
	for(i=0; i<n; i++){
		int j;
		for(j=i ; j >=1; j--){
			if(data[j-1] > data[j]){
				int temp;
				temp = data[j-1];
				data[j-1] = data[j];
				data[j] = temp;
			}else break;
		}
	}
	
	for(i = 0 ; i<n;i++)	
		printf("%d",data[i]);
}
