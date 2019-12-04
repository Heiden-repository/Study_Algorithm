#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX =100;

vector <int> graph[MAX];
vector <int> reverseGraph[MAX];
vector <int> cost[MAX], revCost[MAX];

int n,m;
int x;
int Table[MAX],Table2[MAX];
bool Check[MAX],Check2[MAX];

int main(){
	scanf("%d %d %d",&n,&m,&x);
	
	for(int i=0; i<m;i++){
		int a,b,c;
		
		scanf("%d %d %d",&a,&b,&c);
		
		graph[a].push_back(b);
		reverseGraph[b].push_back(a);
		cost[a].push_back(c);
		revCost[b].push_back(c);
	}
	for(int i=1; i<=n; i++) Table[i] = 987987987;
	Table[x] = 0;
	
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
	
	for(int i=1; i<=n; i++) Table2[i] = 987987987;
	Table2[x] = 0;
	
	for(int i=0;i<n;i++) {

		int minValue = 987978987, minIndex = -1;
		
		for(int j=1;j<=n;j++){
			if(!Check2[j] && minValue > Table2[j]){
				minValue = Table2[j];
				minIndex = j;
			}
		}
		
		Check2[minIndex] = true;	
		for(int j=0;j<reverseGraph[minIndex].size();j++){
			int Node2 = reverseGraph[minIndex][j];
			int cost2 = revCost[minIndex][j];
			if(Table2[Node2]>Table2[minIndex]+cost2){
				Table2[Node2] = Table2[minIndex] + cost2;
			}
		}	
	}
	for(int i=1;i<=n;i++)printf("Table[%d] : %d\n",i,Table[i]);
	for(int i=1;i<=n;i++)printf("Table2[%d] : %d\n",i,Table2[i]);
	int sum =0;
	for(int i=1;i<=n;i++) sum = sum + Table[i]+Table2[i];
	printf("%d",sum);
	return 0;
}
