#include<cstdio>
#include<cstring>

//1.Table T[i][j] = i~j까지 문자열을 
//palindrome으로 만들기 우이하여 추가해야하는 문자 개수의 최솟값 
//2.점화식
//if data(i) == data(j)  T[i+1][j-1]
//else min(T[i+1][j],T[i][j-1]) + 1
//3.정답위치 T[0][len-1] 
int main(){
	char data[1001];
	scanf("%s",data);
	
	int len = strlen(data);
	int T[len][len] = {0,};
	
	for(int i = len-1; i >= 0 ; i--){
		for(int j = 0; j < len ; j++){
			if(j > i){
				if(data[i] == data[j]) {
					T[i][j] = T[i+1][j-1];
					//printf("data[i] == data[j] ");
				}
				else {
					if(T[i+1][j] > T[i][j-1]) T[i][j] = T[i][j-1] + 1;
					else T[i][j] = T[i+1][j] +1;
					//printf("data[i] != data[j] ");
				}
			}
			//printf("T[%d][%d] : %d\n",i,j,T[i][j]);
		}
	}	
	
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++)
			printf("%d ",T[i][j]);
		printf("\n");
	}
	
	printf("%d",T[0][len-1]);
	
	return 0;
}
