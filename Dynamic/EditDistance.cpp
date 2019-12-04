#include<cstdio>
#include<cstring>

int main(){
	char str1[1001];
	char str2[1001];
	scanf("%s %s",str1,str2);
	
	int str1len = strlen(str1);
	int str2len = strlen(str2);
	int T[str1len][str2len];
	
	if(str1[0] == str2[0]) T[0][0] = 0;
	else T[0][0] = 2;
	bool check = false;
	for(int i = 1; i< str1len; i++) 
	{
		if(str1[i] != str2[0]) T[i][0] = T[i-1][0]+1;
		else if(check) T[i][0] = T[i-1][0]+1;
		else {
			T[i][0] = i;
			check = true;
		}
	}
	check = false;	
	for(int j = 1; j< str2len; j++)
	{
		if(str2[j] != str1[0]) T[0][j] = T[0][j-1]+1;
		else if(check) T[0][j] = T[0][j-1]+1;
		else {
			T[0][j] = j;
			check = true;
		}
	}	
	
	
	for(int i =1 ; i < str1len; i++){
		for(int j =1; j < str2len; j++){
			if(str1[i] == str2[j]) {
				T[i][j] = T[i-1][j-1];
			}
			else {
				if(T[i-1][j] > T[i][j-1]) T[i][j] = T[i][j-1] + 1;
				else T[i][j] = T[i-1][j] + 1;
			}
		}
	}
	
	for(int i = 0; i < str1len; i++){
		for(int j = 0; j < str2len; j++)
			printf("%d ",T[i][j]);
		printf("\n");
	}
	printf("%d",T[str1len-1][str2len-1]);
	
	return 0;
}
