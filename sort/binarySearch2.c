#include<stdio.h>

int binarySearch(int arr[], int myStart, int myEnd, int value){
	int start,end;
	int mid;
	
	if(arr[myStart] > value) return -1;
	else if(arr[myStart] == value) return myStart;
	
	if(arr[myEnd] < value) return -1;
	else if(arr[myEnd] == value) return myEnd;
	
	start = myStart;
	end = myEnd;
	
	while(start+1 < end) {
		mid = (start + end) / 2;
		
		if(arr[mid] == value) return mid;
		else if(arr[mid] > value) end = mid;
		else start = mid;
	}
	return -1;
}

int main(){
	int n,m;
	int arr[100];
	
	scanf("%d",&n);
	
	int i;
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
		
	scanf("%d",&m);
	
	int inx = binarySearch(arr,0,n-1,m);
	
	if(inx == -1){
		printf("No Data\n");
	}
	else {
		printf("%d\n",inx);
	}
	
	return 0l
}
