#include<cstdio>

int main(){
	int n;
	scanf("%d",&n);
	int button[n][3];
	int T[n][3];
	for(int i = 0; i < n;i++)
		for(int j = 0; j < 3;j++)
			scanf("%d",&button[i][j]);
 	T[0][0] = button[0][0]; 
	T[0][1] = button[0][1]; 
	T[0][2] = button[0][2];
	printf("T[%d][0] : %d T[%d][1] : %d T[%d][2] : %d\n", 0, T[0][0], 0 , T[0][1],0,T[0][2]); 
	 
	for(int i = 1 ; i < n; i++){
		if(T[i-1][1] > T[i-1][2]) T[i][0] = T[i-1][1] + button[i][0];
		else T[i][0] = T[i-1][2] + button[i][0];
		if(T[i-1][0] > T[i-1][2]) T[i][1] = T[i-1][0] + button[i][1];
		else T[i][1] = T[i-1][2] + button[i][1];
		if(T[i-1][0] > T[i-1][1]) T[i][2] = T[i-1][0] + button[i][2];
		else T[i][2] = T[i-1][1] + button[i][2];
		printf("T[%d][0] : %d T[%d][1] : %d T[%d][2] : %d\n", i, T[i][0], i , T[i][1],i,T[i][2]); 
	}
	int sum = T[n-1][0];
	if(sum < T[n-1][1]) sum = T[n-1][1];
	if(sum < T[n-1][2]) sum = T[n-1][2];
		
	printf("%d",sum);	
	return 0;
}
