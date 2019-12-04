#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];
bool visited[MAX];
int num = 0;

void BFS(int x){
	
	queue <int> Queue; 
	
	Queue.push(x);
	visited[x] = true;
	
	while(!Queue.empty()){
		int current = Queue.front();
		Queue.pop();
		for(int i =0; i<myGraph[current].size();i++){
			int next = myGraph[current][i];
			
			if(visited[next] == false){
				visited[next] = true;
				Queue.push(next);
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		myGraph[a].push_back(b);
		myGraph[b].push_back(a);
	}
	for(int i=1; i<=n; i++){
		if(!visited[i]) {
			BFS(i);
			num++;
		}
	}
	
	printf("%d",num);
	return 0;
}
