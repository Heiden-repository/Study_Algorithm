#include<cstdio>
#include<vector>

using namespace std;
const int MAX = 100;

//Global variable
int n,m;
vector <int> myGraph[MAX];
bool visited[MAX];

void DFS(int x){
	//x부처 시작해서 DFS하여 그순서를 출력하는 함수 
	//단, visited에 방문 기록이 있음
	visited[x] = true;
	printf("%d ",x);
	 
	for(int i=0; i<myGraph[x].size();i++){
		int y = myGraph[x][i];
		//x와 y가 연결이 되어있다.
		
		if(visited[y] == false){
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
	
	DFS(0); 
	return 0;
}
