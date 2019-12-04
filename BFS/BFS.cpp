#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];
bool visited[MAX];

void BFS(){
	//1.시작점을 큐에다가 삽입한다.
	//2. 시작점을 색칠한다.
	
	//BFS 시작!
	
	//3.큐에서 하나를 뺀다. 현재위치 
	//4.인접한 모든 정점에게 방문했는지 물어보고
	// 방문을 하지 않았다면, 색칠하고 큐에 삽입한다.
	//5. 모두 완료했다면 다시 3.으로 돌아간다. 
	
	bool check[MAX] = {0,};
	queue <int> Queue; 
	
	Queue.push(0);
	check[0] = true;
	
	while(!Queue.empty()){
		int current = Queue.front();
		Queue.pop();
		
		printf("%d ",current);
		
		for(int i =0; i<myGraph[current].size();i++){
			int next = myGraph[current][i];
			
			if(check[next] == false){
				check[next] = true;
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
	
	BFS();
	
	return 0;
}
