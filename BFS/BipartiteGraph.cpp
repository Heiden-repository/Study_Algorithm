#include<cstdio>
#include<vector>
#include<queue>

using namespace std;
const int MAX = 1000;

int n,m;
vector <int> myGraph[MAX];
int group[MAX] = {0,};
bool result = false;

void BFS(){

	bool check[MAX] = {0,};
	
	queue <int> Queue; 
	
	Queue.push(1);
	check[1] = true;
	int num = 1;
	group[1] = num;
	while(!Queue.empty()){
		int current = Queue.front();
		Queue.pop();
		if(num == 1) num=2;
		else num = 1;
		
		for(int i =0; i<myGraph[current].size();i++){
			int next = myGraph[current][i];
			if(check[next] == false){
				group[next] = num;
				check[next] = true;
				Queue.push(next);
			}
			if(group[next]==group[current]) result = true;
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
	if(result) printf("No\n");
	else printf("Yes\n");
	
	for(int i=1; i<=n; i++){
		printf("group[%d] : %d\n",i,group[i]);
	}
	return 0;
}
