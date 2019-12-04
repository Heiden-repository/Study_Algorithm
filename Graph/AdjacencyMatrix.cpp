#include<cstdio>

//인접행렬 장점 : 연결 여부를 O(1)에 알 수 있다.
//단점 : 인접한 정점을 찾는데 O(n)이 걸린다.
//		무조건 n^2개의 칸을 써야한다. 

const int MAX = 100;
int n,m; // n: 정점의 갯수, m: 간선의 갯수
bool isConnected(int myGraph[MAX][MAX],int x, int y){
	// x와 y가 연결되어있으면 true, 아니면 false를 반환 
	return myGraph[x][y] == 1 ? true : false; 
}

void getAdj(int myGraph[MAX][MAX], int x){
	// 인접해있는 정점 
	for(int i =1; i<=n ;i++){
		if(myGraph[x][i] == 1) printf("%d ",i);
	}
	printf("\n");
}

int main(){
	
	int myGraph[MAX][MAX] = {0,};
	
	scanf("%d %d",&n,&m) ;
	
	for(int i=0; i <m;i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		myGraph[a][b] = 1;
		myGraph[b][a] = 1;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) printf("%d ",myGraph[i][j]);
		printf("\n");		
	}
	printf("%d\n",(int)isConnected(myGraph,1,2)); //1 		
	
	return 0;
}
