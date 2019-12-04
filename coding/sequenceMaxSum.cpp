//#include<cstdio>
//
//using namespace std;
//
//const int MAX = 10;
//
//int n;
//int data[MAX];
//int sum[MAX];
//
//int main() {
//	scanf("%d", &n);
//
//	for(int i = 0; i< n; i++)
//		scanf("%d", &data[i]);
//
//	sum[0] = data[0];
//	for (int i = 1; i < n; i++)
//		sum[i] = sum[i - 1] + data[i];
//
//	int myMax = -987987987;
//
//	for (int start = 0; start < n; start++) {
//		for (int end = start; end < n; end++) {
//			int mySum = 0;
//
//			if (start == 0) mySum = sum[end];
//			else mySum = sum[end] - sum[start - 1];
//
//			if (mySum > myMax)
//				myMax = mySum;
//		}
//	}
//
//	printf("%d\n", myMax);
//
//	return 0;
//}