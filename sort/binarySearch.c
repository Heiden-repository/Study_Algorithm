#include <stdio.h>

int binarySearch(int arr[], int start.int end. int value){
	if(start > end){
		return -1;
	}
	else if(start == end){
		if(arr[start] == value) return start;
		else return -1;
	}
	else {
		int mid = (start + end) / 2;
		if(arr[mid] == value) return mid;
		else if(arr[mid] > value) return binarySearch(arr,start,mid-1,value);
		else return binarySearch(arr,mid+1,end,value);
	}	
}

int main() {
	int n,m;
	int arr[100];
	
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
		
	scanf("%d",&m);
	
	int inx = binarySearch(arr,0,n-1,m);
	
	if(inx == -1){
		printf("NO Data\n");
	}
	else {
		printf("%d\n",inx);
	}
	
	return 0;
}
