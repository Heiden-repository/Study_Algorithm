#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

const int MAX = 1000;
int n,m;
int map[MAX][MAX];
bool visited[MAX][MAX],visited2[MAX][MAX];
int check[MAX][MAX], check2[MAX][MAX];
int wall[MAX][MAX];

void sBFS(){
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

void eBFS(){
	queue <int> q;
	q.push(0);
	q.push(m-1);
	check2[0][m-1] = 0;
	visited2[0][m-1] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();
		
		if(x>0&&map[x-1][y] == 0&&visited2[x-1][y] == false) {
			check2[x-1][y] = check2[x][y]+1;
			visited2[x-1][y] = true;
			q.push(x-1);
			q.push(y);
		}if(y+1<m&&map[x][y+1] == 0&&visited2[x][y+1] == false) {
			check2[x][y+1] = check2[x][y]+1;
			visited2[x][y+1] = true;
			q.push(x);
			q.push(y+1);
		}if(x+1<n&&map[x+1][y] == 0&&visited2[x+1][y] == false) {
			check2[x+1][y] = check2[x][y]+1;
			visited2[x+1][y] = true;
			q.push(x+1);
			q.push(y);
		}if(y>0&&map[x][y-1] == 0&&visited2[x][y-1] == false) {
			check2[x][y-1] = check2[x][y]+1;
			visited2[x][y-1] = true;
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
	
	sBFS();
	eBFS();
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",check[i][j]);
		}
		printf("\n");
	}
	
	printf("-----------------------------------------------------\n");
	
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",check2[i][j]);
		}
		printf("\n");
	}
	
	printf("-----------------------------------------------------\n");
	
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j] == 1){
				int min1 = 987987987,min2=987987987;
				if(i>0 && check[i-1][j] != 0 &&check[i-1][j] <min1) {
					min1 = check[i-1][j];
				}
				if(j<m&& check[i][j+1] != 0&&check[i][j+1] <min1) {
					min1 = check[i][j+1];
				}
				if(i<n&& check[i+1][j] != 0&&check[i+1][j] <min1) {
					min1 = check[i+1][j];
				}
				if(j>0&& check[i][j-1] != 0&&check[i][j-1] < min1) {
					min1 = check[i][j-1];
				}
				
				if(i>0&& check2[i-1][j] != 0&&check2[i-1][j] <min2) {
					min2 = check2[i-1][j];
				}
				if(j<m&& check2[i][j+1] != 0&&check2[i][j+1] <min2) {
					min2 = check2[i][j+1];
				}
				if(i<n&& check2[i+1][j] != 0&&check2[i+1][j] <min2) {
					min2 = check2[i+1][j];
				}
				if(j>0&& check2[i][j-1] != 0&&check2[i][j-1] < min2) {
					min2 = check2[i][j-1];
				}
				wall[i][j] = min1+min2;	
			}
		}
	}
	
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",wall[i][j]);
		}
		printf("\n");
	}
	
	int mostMin = 987987987;
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			if(wall[i][j] !=0 && mostMin > wall[i][j] ) mostMin = wall[i][j];
		}
	}
	
	printf("%d",mostMin+2);
	
	return 0;
}
