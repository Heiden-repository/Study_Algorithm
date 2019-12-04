#include<cstdio>
#include<queue>
using namespace std;

const int MAX = 100000;

int n,k;
int count = 0;
int visited[MAX];

void BFS(int s){
	queue<int> q;
	int num = s;
	q.push(s);
	visited[s] = true;
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		count++;
		printf("count[%d] : %d\n",x,count);
		if(x*2<=n&&visited[x*2]==false) {
			q.push(x*2);
		
			visited[x*2] = true;
		}
		if(x/3 >=1 &&visited[x/3]==false) {
			q.push(x/3);
			visited[x/3] = true;
		}
	}
}

int main(){
	scanf("%d %d",&n,&k);
	
	
	BFS(k);
	
	printf("%d\n",n-count);
}
