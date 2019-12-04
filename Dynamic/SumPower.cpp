#include<cstdio>

int main(){
	int n;
	scanf("%d",&n);
	int T[n+5];
	T[0] = 0;
	T[1] = 1;
	
	for(int i = 2; i <= n; i++){
		int sum = 99999999;
		for(int j = 1; j*j <= i ;j++){
			int temp = T[i - j*j] + 1;
			if(sum > temp) sum = temp;
		}
		T[i] = sum;
	}
	printf("%d",T[n]);
	
	return 0;
}
