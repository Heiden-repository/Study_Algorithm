#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
const int MAX = 100000;

int n,m;
vector <int> myGraph[MAX];
bool result = false;

void BFS(){

	bool check[MAX] = {0,};
	int color[MAX];
	queue <int> Queue; 
	
	Queue.push(0);
	check[0] = true;
	color[0] = 1;
	while(!Queue.empty()){
		int current = Queue.front();
		Queue.pop();
		int temp = 0;
		if(color[current] == 1) temp = 2;
		else temp = 1;	
		for(int i =0; i<myGraph[current].size();i++){
			int next = myGraph[current][i];
			if(color[current] == color[next]){
				result = true;
				return;
			}
			color[next] = temp;
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
	if(result) printf("NO");
	else printf("YES");
	
	return 0;
}
