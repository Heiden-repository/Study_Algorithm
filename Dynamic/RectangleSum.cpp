#include<cstdio>
	
using namespace std;

int main(){
	int n,m,q;

	scanf("%d %d %d",&n,&m,&q);
	int data[n][m];
	int T[n][m];
	for(int i = 0;i < n;i++){
		for(int j=0; j < m; j++){
			scanf("%d",&data[i][j]);
			printf("data[%d][%d] : %d\n",i,j,data[i][j]); 
		}
	}
	
	for(int i = 0;i < n;i++){
		for(int j=0; j < m; j++){
			if(i == 0&&j ==0) T[i][j] = data[i][j];
			else if(i == 0) T[i][j] = data[i][j] + T[i][j-1];
			else if(j == 0) T[i][j] = data[i][j] + T[i-1][j];
			else T[i][j] = T[i-1][j] + T[i][j-1] - T[i-1][j-1] + data[i][j];
			printf("T[%d][%d] : %d\n",i,j,T[i][j]); 
		}
	}
	
	for(int i = 0 ; i < q; i++){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int sum = 0;
		
		if(a == 0&& b==0) sum = T[c][d];
		else if(a == 0) sum = T[c][d] - T[c][b-1];
		else if(b == 0) sum = T[c][d] - T[a-1][d];
		else sum = T[c][d] - T[c][b-1] - T[a-1][d] + T[a-1][b-1];
		printf("%d\n",sum);
	}
 	return 0;
}
