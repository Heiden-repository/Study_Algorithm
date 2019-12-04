#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX =100;

vector <int> graph[MAX];
vector <int> cost[MAX];

int n,m;
int x,y;
int Table[MAX],Table2[MAX],Table3[MAX];
bool Check[MAX],Check2[MAX],Check3[MAX];
int min1,min2;

int main(){
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<m;i++){
		int a,b,c;
		
		scanf("%d %d %d",&a,&b,&c);
		
		graph[a].push_back(b);
		graph[b].push_back(a);
		
		cost[a].push_back(c);
		cost[b].push_back(c);
	}
	scanf("%d %d",&x,&y);

	for(int i=1; i<=n; i++) Table[i] = 987987987;
	Table[1] = 0;
	for(int i=1; i<=n; i++) Table2[i] = 987987987;
	Table2[n] = 0;
	for(int i=1; i<=n; i++) Table3[i] = 987987987;
	Table3[x] = 0;
	
	for(int i=0;i<n;i++) {

		int minValue = 987978987, minIndex = -1;
		
		for(int j=1;j<=n;j++){
			if(!Check[j] && minValue > Table[j]){
				minValue = Table[j];
				minIndex = j;
			}
		}
		
		Check[minIndex] = true;	
		for(int j=0;j<graph[minIndex].size();j++){
			int Node2 = graph[minIndex][j];
			int cost2 = cost[minIndex][j];
			if(Table[Node2]>Table[minIndex]+cost2){
				Table[Node2] = Table[minIndex] + cost2;
			}
		}	
	}

	for(int i=0;i<n;i++) {

		int minValue = 987978987, minIndex = -1;
		
		for(int j=1;j<=n;j++){
			if(!Check2[j] && minValue > Table2[j]){
				minValue = Table2[j];
				minIndex = j;
			}
		}
		
		Check2[minIndex] = true;
		
		for(int j=0;j<graph[minIndex].size();j++){
			int Node2 = graph[minIndex][j];
			int cost2 = cost[minIndex][j];

			if(Table2[Node2]>Table2[minIndex]+cost2){
				Table2[Node2] = Table2[minIndex] + cost2;
			}
		}	
	}
	
	for(int i=0;i<n;i++) {

		int minValue = 987978987, minIndex = -1;
		
		for(int j=1;j<=n;j++){
			if(!Check3[j] && minValue > Table3[j]){
				minValue = Table3[j];
				minIndex = j;
			}
		}
		
		Check3[minIndex] = true;
		
		for(int j=0;j<graph[minIndex].size();j++){
			int Node2 = graph[minIndex][j];
			int cost2 = cost[minIndex][j];

			if(Table3[Node2]>Table3[minIndex]+cost2){
				Table3[Node2] = Table3[minIndex] + cost2;
			}
		}	
	}
	

	min1 = Table[x]+Table2[y];
	min2 = Table[y]+Table2[x];
	if(min1 > min2) min1 = min2;
			
	int mid = Table3[y];
	printf("%d\n",min1+mid);
	
	return 0;
}
