#include <stdio.h>

void mergeSort(int arr[],int start,int end){
	if(start >= end)
		return;
	else {
		int mid = (start+end)/2;
		
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		
		merging(arr,start,mid,mid+1,end);
	}
}

void merging(int arr[],int s1,int e1,int s2,int e2){
	int p ,q;
	int temp[100];
	int temp_inx = 0;
	
	p =s1;
	q =s2;
	
	while(p <= e1 && q<= e2) {
		if(arr[p <= arr[q]]){
			temp[temp_inx++] = arr[p];
			p++;
		} else {
			temp[temp_inx++] = arr[q];
			q++;
		}
	}
	int i;
	if( p > e1) {
		for(i = q; i <= e2;i++)
			temp[temp_inx++] = arr[i];
	}
	else {
		for(i = p; i <= e1;i++)
			temp[temp_inx++] = arr[i];
	}
	
	for(i=s1; i <= e2; i++){
		arr[i] = temp[i-s1];
	}
}

int main(){
	int n;
	int numbers[100];
	
	scanf("%d",&numbers[i]);
	int i;
	for( i = 0; i < n ;i++ )
		scanf("%d",&numbers[i]);
		
	mergeSort(numbers,0,n-1);
	
	for( i = 0; i < n ;i++ )
		printf("[%d]",numbers[i]);
	
	return 0;
}
