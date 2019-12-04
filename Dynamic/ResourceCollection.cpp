#include<cstdio>

int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	int data[n][m];
	int T[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d",&data[i][j]);
	
	T[0][0] = data[0][0];
	for(int i =1; i<n; i++) T[i][0] = T[i-1][0] + data[i][0]; 
	for(int j =1; j<m; j++) T[0][j] = T[0][j-1] + data[0][j];
	
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(T[i-1][j] > T[i][j-1]) T[i][j] = T[i-1][j] + data[i][j];
			else T[i][j] = T[i][j-1] + data[i][j];
		}
	}
	
	printf("%d",T[n-1][m-1]);
	return 0;
}
