#include <stdio.h>

int getLeft(int arr[], int start,int end,int pivot,int result[]){
	int i;
	int inx = 0;
	for(i=start; i <= end; i++) {
		if(arr[i] <= pivot){
			result[inx++] = arr[i];
		}
	}
	return inx;	
}

int getRight(int arr[], int start, int end, int pivot, int result[]){
	int i;
	int inx = 0;
	for(i = start; i<= end; i++){
		if(arr[i] > pivot) {
			result[inx++] = arr[i];
		}
	}
	return inx;	
}

void quickSort(int arr[], int start, int end){
	if(start >= end)
		return;
	int pivot = arr[start];
	int left[100], right[100];
	
	int left_cnt = getLeft(arr,start+1,end,pivot,left);
	int right_ent = getRight(arr,start+1;end,pivot,right);
	
	for(i = 0; i<left_cnt; i++){
		arr[start+i] = left[i];
	}
	arr[start+left_cnt] = pivot;
	for(i=0;i<right_cnt;i++){
		arr[start+left_cnt+1+i] = right[i];
	}
	
	quickSort(arr,start,start+left_cnt-1);
	quickSort(arr,start+left_cnt+1,end);
}

int main(){
	int n;
	int arr[100];
	
	scanf("%d",&n);
	int i;
	for(i=0; i <n ; i++)
		scanf("%d",&arr[i]);
		
	quickSort(arr,0,n-1);
	
	for(i=0 ; i<n; i++)
		printf("%d",arr[i]);	 	
	
	return 0;
}
