//#include <cstdio>
//int n, r;
//int arr[100][100];
//int visit[100];
//int depth, max;
//void find(int a) {
//	visit[a] = 1;
//	depth++;
//	if (depth > max) {
//		max = depth;
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (arr[a][i] == 1 && visit[i] == 0) {
//			find(i);
//			depth--;
//		}
//	}
//
//	return;
//}
//int main() {
//	scanf("%d %d", &n, &r);
//	for (int i = 0; i < n - 1; i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		arr[a][b] = 1;
//		arr[b][a] = 1;
//	}
//
//
//	find(r);
//
//	printf("%d", max - 1);
//
//	return 0;
//}