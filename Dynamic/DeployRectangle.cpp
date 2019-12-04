#include<cstdio>

int main(){
	int n;
	scanf("%d",&n);
	long long int T[n];
	
	T[1] = 1;
	T[2] = 2;
	printf("T[%d] : %d\n",1,T[1]);
	printf("T[%d] : %d\n",2,T[2]);
	
	for(int i=3; i <= n; i++){
		T[i] = T[i-2] + T[i-1];
		printf("T[%d] : %d\n",i,T[i]);	
	}
	int k = T[n];
	printf("%lld\n",k%1000007);
	 
	return 0;
}
