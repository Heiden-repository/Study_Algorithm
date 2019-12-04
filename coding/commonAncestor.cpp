//#include <cstdio>
//
//int tree[1000];
//
//int returnValue(int idx) {
//	int num;
//	num = tree[idx];
//	return num;
//}
//
//
//int main() {
//	int n, x, y;
//	scanf("%d %d %d", &n, &x, &y);
//
//	for (int i = 0; i < n; i++) {
//		int num,idx;
//		scanf("%d %d", &num, &idx);
//
//		tree[idx] = num;
//	}
//	int com = -1;
//	while (com == -1) {
//		if (x > y) x = returnValue(x);
//		else if (x < y) y = returnValue(y);
//		else com = x;
//	}
//	printf("%d", com);
//}