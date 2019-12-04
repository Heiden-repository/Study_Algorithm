#include<cstdio>

int main(){
	int n;
	scanf("%d",&n);
	int card[n];
	int T[n];
	
	for(int i = 0; i < n; i++) scanf("%d",&card[i]);
	T[0] = 0;
	T[1] = card[0] + card[1];
	int a,b,c;
	a = card[0] + card[1];
	b = card[0] + card[2];
	c = card[1] + card[2];
	if(a > b) T[2] = a;
	else T[2] = b;
	if(T[2] < c) T[2] =c;  
	printf("T[%d] : %d\n",1,T[1]);
	printf("T[%d] : %d\n",2,T[2]);
	
	a = T[1] + card[3];
	b = card[0] + card[2] + card[3];
	if(a > b) T[3] = a;
	else T[3] = b;
	
	printf("T[%d] : %d\n",3,T[3]);
	
	int i = 4;
	
	while(i < n){
		
		int temp1 = T[i-3] + card[i] + card[i-1];
		int temp2 = T[i-2] + card[i];
		int temp3 = T[i-1];
			
		if(temp1 > temp2) T[i] = temp1;
		else T[i] = temp2;
		if(T[i] < temp3) T[i] = temp3;
		i++;
		printf("T[%d] : %d\n",i-1,T[i-1]);
	}
	
	printf("%d",T[n-1]);
	
	return 0;
}
