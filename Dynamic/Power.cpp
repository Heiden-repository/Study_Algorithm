#include<cstdio>

/*
(1) 함수의 정의 : 함수의 의미를 '말로' 정의한다.
(2) 점화식: 나보다 작은 함수는 값을 잘 구한다고 가정하고,
			이들을 이용해서 나를 구하기 위한 식을 찾는다.
(3) 기저조건 
*/

int getResult(int n, long long int m){
	//n^m을 10007로 나눈나머지를 반환하는 함수
	
	if(n == 0) return 1;
	else {
		if(m % 2 == 0){
			//n^m = (n^(m/2))^2
			int temp = getResult(n,m/2);
			return (temp*temp) % 10007;
		}
		else {
			int temp = getResult(n,m-1);
			return (temp*n) % 10007;
		}
	}
} 

int main(){
	int n;
	long long int m; // 2^63
	
	scanf("%d %lld", &n,&m);
	printf("%d",getResult(n,m));
	
	return 0;
}
