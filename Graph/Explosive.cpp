#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1000001;

vector <int> List[MAX];
vector <int> reverseList[MAX];
int n,m;

int timeNode[MAX];
int clockNode =1;
int order[MAX],order_len = 0; 
int group[MAX], group_cnt = 1;
bool check[MAX],check2[MAX];

void get_time(int node){
	
	check[node] = true;
	
	for(int i=0;i<List[node].size();i++){
		int node2 = List[node][i];
		
		if(!check[node2]){
			get_time(node2);
		}
	}
	timeNode[node] = clockNode;
	clockNode++;
	
	order[order_len++] = node;
}

void get_my_group(int node){
	
	check2[node] = true;
	group[node] = group_cnt;
	 
	for(int i=0;i<List[node].size();i++){
		int node2 = List[node][i];
		//printf("node[%d] : %d\n",node,node2);
		if(!check2[node2]){
			get_my_group(node2);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<m;i++){
		int a,b;
		
		scanf("%d %d",&a,&b);
		
		List[a].push_back(b);
		reverseList[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++){
		if(!check[i]){
			get_time(i);		
		}
	}
	
	for(int i =order_len-1;i>=0;i--){
	 	int node = order[i];
	 	
	 	if(!check2[node]){
			get_my_group(node);
			group_cnt++;
		}
	}
	 
//	for(int i=1;i<=n;i++){
//		printf("order[%d] : %d\n",i,order[i]);
//	}
//	
//	 
//	for(int i=1;i<=n;i++){
//		printf("group[%d] : %d\n",i,group[i]);
//	}
	
	printf("%d\n",group_cnt-1);
	return 0;
}
