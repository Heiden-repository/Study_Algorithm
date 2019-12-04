#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

const int MAX =1000000;

vector <int> graph[MAX];

int n,m,start,end;
int Table[MAX];
bool Check[MAX]; 
int main(){
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<m;i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		graph[a].push_back(b);
		graph[b].push_back(a);		
	}
	scanf("%d %d",&start,&end);
	
	for(int i=0; i<n; i++) Table[i] = 987987987;
	Table[start] = 0;
	
	for(int i=0;i<n;i++){
		int minValue = 987987987;
		int minIndex = -1;
		
		for(int j=0;j<n;j++){
			if(!Check[j] && minValue > Table[j]){
				minValue = Table[j];
				minIndex = j;
			}
		}
		
		Check[minIndex] = true;
		
		for(int j=0;j<graph[minIndex].size();j++){
			int node2 = graph[minIndex][j];
			
			if(Table[node2]>Table[minIndex]){
				Table[node2] = Table[minIndex]+1;
			}
		}	
	}
		
	printf("%d\n",Table[end]);
	
	return 0;
}
