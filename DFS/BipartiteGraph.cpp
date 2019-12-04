#include<cstdio>
#include<vector>

using namespace std;
const int MAX = 100;

int n,m;
vector <int> myGraph[MAX];
bool visited[MAX];
int set[MAX] = {0,};
bool check = false;

void DFS(int x,int num){
	visited[x] = true;
	set[x] = num;
	 
	for(int i=0; i<myGraph[x].size();i++){
		int y = myGraph[x][i];
		if(set[y] == num){
			check = true;
		}
		if(visited[y] == false){
			if(num == 1)
				DFS(y,2);
			else DFS(y,1);
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
	
	DFS(1,1);
	
	if(check) printf("NO");
	else printf("YES"); 
	return 0;
}
