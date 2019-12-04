#include<cstdio>
#include<algorithm>

const int MAX = 27;

int n;
int number=0;
char strBuildings[MAX][MAX];
int buildings[MAX][MAX];
int check[MAX][MAX];
int count[MAX-1]={0,};
void numbering(int i,int j){
	count[number] += 1;
	check[i][j] = true;
	printf("buiding[%d][%d]\n",i,j);
	if(buildings[i-1][j] == 1&&check[i-1][j]==false){
		numbering(i-1,j);
	}
	if(buildings[i][j-1] == 1&&check[i][j-1]==false){
		numbering(i,j-1);
	}
	if(buildings[i][j+1] == 1&&check[i][j+1]==false){
		numbering(i,j+1);
	}
	if(buildings[i+1][j] == 1&&check[i+1][j]==false){
		numbering(i+1,j);
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
				numbering(i,j);
			}
		}
	}
	
	printf("%d\n",number);
	std :: sort(count+1,count+number+1);
	for(int i=1;i<=number;i++)printf("%d\n",count[i]);
	return 0;
}
