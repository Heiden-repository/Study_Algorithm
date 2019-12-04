#include<cstdio>
#include<vector>

using namespace std;
 //인접리스트 : 각각의 정점에 대하여 인접한 정점 번호를 저장 
 // 단점 : 인접 여부를 보려면 인접한 정점을 모두 봐야한다.
 // 장점 : 인접한 정점을 모두 찾는데 필요한 만큼만 본다. 필요한 만큼만 공간을 활용한다.
  
const int MAX= 100;
  
int main(){
	vector<int> myGraph[MAX];
	//myGraph[X] = X에 인접해있는 모든 노드 
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<m;i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		myGraph[a].push_back(b);
		myGraph[b].push_back(a);
	} 
	
	for(int i=1;i<=n;i++){
		printf("%d(%d) : ",i,myGraph[i].size());
		
		for(int j=0;j<myGraph[i].size();j++){
			printf("%d ",myGraph[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
