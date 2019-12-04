#include<cstdio>

const int MAX = 1000000;

int data[MAX];

int main(){
	
	data[1] = 1;
	data[2] = 1;
	data[3] = 1;
	int n;
	scanf("%d", &n);
	int i = 4;
	while(i <= n){
		if(data[i-1] == 0 || data[i-2] == 0 || data[i-3] == 0) data[i] = 1;
		else data[i] = 0;
		i++;
	}
	
	if(data[n] != 0) printf("YES");
	else printf("NO");
	return 0;
}
