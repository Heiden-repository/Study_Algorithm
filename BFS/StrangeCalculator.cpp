#include<cstdio>
#include<queue>
using namespace std;

const int MAX = 200000;

int n;
int data[MAX];
int visited[MAX];

void BFS(){
	queue<int> q;
	int num = 1;
	data[num] =0;
	q.push(1);
	visited[1] = true;
	
	while(!q.empty()){
		int x=q.front();
		printf("%d\n",x);
		q.pop();
		if(x == n) return;
		if(visited[x*2]==false&&x*2<100000) {
			q.push(x*2);
			data[x*2] = data[x]+1;
			visited[x*2] = true;
		}
		if(visited[x/3]==false) {
			q.push(x/3);
			data[x/3] = data[x]+1;
			visited[x/3] = true;
		}
	}
}

int main(){
	scanf("%d",&n);
	
	BFS();
	
	printf("%d\n",data[n]);
}
