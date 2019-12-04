#include<cstdio>
#include<vector>

using namespace std;
const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];
bool visited[MAX];
int count = 0;
void DFS(int x){
	visited[x] = true;
	 
	for(int i=0; i<myGraph[x].size();i++){
		int y = myGraph[x][i];
		
		if(visited[y] == false){
			count++;
			DFS(y);
		} 
	}
}

int main(){

	scanf("%d %d",&n,&m);

	for(int i =0 ; i<m; i++){
		int a,b;
	
		scanf("%d %d",&a,&b);
	
		myGraph[a].push_back(b);
		myGraph[b].push_back(a);
	}
	
	DFS(1); 
	
	printf("%d",count);
	return 0;
}
