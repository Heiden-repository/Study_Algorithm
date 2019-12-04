#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

const int MAX = 1000;
int n,m;
int map[MAX][MAX];
bool visited[MAX][MAX];
int check[MAX][MAX];

void BFS(){
	queue <int> q;
	q.push(n-1);
	q.push(0);
	check[n-1][0] = 0;
	visited[n-1][0] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();
		//printf("%d %d\n",x, y);
		
		if(x>0&&map[x-1][y] == 0&&visited[x-1][y] == false) {
			check[x-1][y] = check[x][y]+1;
			visited[x-1][y] = true;
			q.push(x-1);
			q.push(y);
		}if(y+1<m&&map[x][y+1] == 0&&visited[x][y+1] == false) {
			check[x][y+1] = check[x][y]+1;
			visited[x][y+1] = true;
			q.push(x);
			q.push(y+1);
		}if(x+1<n&&map[x+1][y] == 0&&visited[x+1][y] == false) {
			check[x+1][y] = check[x][y]+1;
			visited[x+1][y] = true;
			q.push(x+1);
			q.push(y);
		}if(y>0&&map[x][y-1] == 0&&visited[x][y-1] == false) {
			check[x][y-1] = check[x][y]+1;
			visited[x][y-1] = true;
			q.push(x);
			q.push(y-1);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);

	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&map[i][j]);
		}
	}
	
	BFS();
	
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",check[i][j]);
		}
		printf("\n");
	}
	
	printf("%d\n",check[0][m-1]);
	
	return 0;
}
