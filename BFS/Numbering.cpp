#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
 
const int MAX = 1000;

int n;
char strBuildings[MAX][MAX];
int buildings[MAX][MAX];
int number=0;
bool check[MAX][MAX];
int numCount[MAX];

void BFS(int i,int j){

	queue <int> Queue; 
	
	Queue.push(i);
	Queue.push(j);
	check[i][j] = true;
	numCount[number] = 0;
	while(!Queue.empty()){
		i = Queue.front();
		Queue.pop();
		j = Queue.front();
		Queue.pop();
		numCount[number]++;
		
		if(buildings[i-1][j] == 1&&check[i-1][j]==false){
			Queue.push(i-1);
			Queue.push(j);
			check[i-1][j]=true;
		}
		if(buildings[i][j-1] == 1&&check[i][j-1]==false){
			Queue.push(i);
			Queue.push(j-1);
			check[i][j-1]=true;
		}
		if(buildings[i][j+1] == 1&&check[i][j+1]==false){
			Queue.push(i);
			Queue.push(j+1);
			check[i][j+1]=true;
		}
		if(buildings[i+1][j] == 1&&check[i+1][j]==false){
			Queue.push(i+1);
			Queue.push(j);
			check[i+1][j]=true;
		}
	}
}

int main(){
   	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
		scanf("%s",&strBuildings[i]);
	
	for(int i=1;i<=n;i++)
		for(int j=0;j<n;j++)
			buildings[i][j+1] = strBuildings[i][j] - 48;
		
	for(int i=0;i<=n+1;i++){
		for(int j=0;j<=n+1;j++){
			printf("%d ",buildings[i][j]);
		}
		printf("\n");	
	}
			
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			if(buildings[i][j]==1&&check[i][j]==false){
				number++;
				printf("number : %d\n",number);
				BFS(i,j);
			}
		}
	}
	
	printf("%d\n",number);
	std :: sort(numCount+1,numCount+number+1);
	for(int i=1;i<=number;i++)printf("%d\n",numCount[i]);
	return 0;
}
