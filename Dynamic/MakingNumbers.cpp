#include<cstdio>
	
using namespace std;

const int MAX = 100;

int Table[MAX];
int n,m;
//1. Table을 어떻게 정의했는지
//2. 점화식을 어떻게 세웠는지

//T(i) = 1 ~ M 까지의 숫자를 이용해서 숫자 i를 만드는 경우의 수
//T(i) = T(i-1) + T(i-2) + ... + T(i-M) 

int main(){
 	scanf("%d %d",&n,&m);
	
	//M = 3
	//Table[1] = 1
	//Table[2] = 2
	//Table[3] = 4
	//Table[4] = Table[1] + Table[2] + Table[3]
	Table[1] = 1;
	int sum = 0;
		
	for(int i = i; i <= m; i++){
		sum += Table[i-1];
		Table[i] = sum +1;	
	}
	
	for(int i = m+1; i <= n;i++){
		for(int j =i-m; j <= i ;j++){
			Table[i] += Table[j];
		}
	}
	
	printf("%d\n",Table[n]);
	return 0;
}
