//Vector

#include<cstdio>
#include<vector>

using namespace std;

int main(){
	vector <int> arr;
	
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	
	arr.pop_back();
	
	printf("%d\n",arr.size());
	
	arr.resize(10,5);
	
	for(int i =0;i<arr.size();i++) printf("%d ",arr[i]);
	printf("\n");
	arr.resize(5);
	for(int i =0;i<arr.size();i++) printf("%d ",arr[i]);

	return 0;
}
