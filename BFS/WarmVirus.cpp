#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];
bool visited[MAX];

int BFS(){

	bool check[MAX] = {0,};
	queue <int> Queue; 
	
	Queue.push(1);
	check[1] = true;
	int count = 0;
	while(!Queue.empty()){
		int current = Queue.front();
		Queue.pop();
	
		for(int i =0; i<myGraph[current].size();i++){
			int next = myGraph[current][i];
			
			if(check[next] == false){
				count++;
				check[next] = true;
				Queue.push(next);
			}
		}
	}
	return count;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		myGraph[a].push_back(b);
		myGraph[b].push_back(a);
	}
	
	printf("%d\n",BFS());
	
	return 0;
}
