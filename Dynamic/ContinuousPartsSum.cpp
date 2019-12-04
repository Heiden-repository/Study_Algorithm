#include<cstdio>

using namespace std;

const int MAX = 100;

int n;
int T[MAX];
int Data[MAX];
// 1. T[] 정의
// 2. 점화식 

int main(){
	scanf("%d",&n);
	
	for(int i =0;i<n;i++){
		scanf("%d",&Data[i]);
	}
	
	T[0] = Data[0];
	
	for(int i=1;i<n;i++){
		if(T[i-1] + Data[i] > Data[i]) T[i] = T[i-1] + Data[i];
		else T[i] = Data[i];
	}
	
	int myMax = -978987987;
	
	for(int i =0;i<n;i++){
		if(T[i] > myMax) myMax = T[i];
	}
	
	printf("%d\n",myMax);
		
	return 0;
}
