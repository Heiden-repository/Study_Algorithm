// 한 점에서 모든 점까지의 최단거리를 구하는 알고리즘 
//최단거리 트리를 만드는 알고리즘 

//T[i] = i까지 도달하는 최단거리
//for i = 0 ~ n
//(1) T[i] 중 최솟값을 정한다. 단, 지금까지 최솟값으로 뽑히지 않았던 것들 중.
//(2) index로부터 뻗어나간다. T[index] + cost 

#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX =100;

vector <int> graph[MAX];
vector <int> cost[MAX];

int n,m,start,end;
int Table[MAX];
bool Check[MAX]; //true: 이미 i는 최단거리가 확정되었다. 

int main(){
	scanf("%d %d %d %d",&n,&m,&start,&end);
	
	for(int i=0; i<m;i++){
		int a,b,c;
		
		scanf("%d %d %d",&a,&b,&c);
		
		graph[a].push_back(b);
		graph[b].push_back(a);
		
		cost[a].push_back(c);
		cost[b].push_back(c);
	}
	
	for(int i=0; i<n; i++) Table[i] = 987987987;
	Table[start] = 0;
	
	for(int i=0;i<n;i++) {
		//(1) 최솟값을 구한다. 단 지끔까지 최다거리로 확정되지 않았던 정점에 대해서.
		//(2) 그 최솟값을 갖는 노드로부터 뻗어나간다.
		 
		int minValue = 987978987, minIndex = -1;
		
		for(int j=0;j<n;j++){
			if(!Check[j] && minValue > Table[j]){
				minValue = Table[j];
				minIndex = j;
			}
		}
		
		Check[minIndex] = true;
		
		for(int j=0;i<graph[minIndex].size();j++){
			int Node2 = graph[minIndex][j];
			int cost2 = cost[minIndex][j];
			
			//minIndex ----(Cost2)--- Node2
			
			if(Table[Node2]>Table[minIndex]+cost2){
				Table[Node2] = Table[minIndex] + cost2;
			}
		}
	}
	
	printf("%d\n",Table[end]);
	
	return 0;
}
