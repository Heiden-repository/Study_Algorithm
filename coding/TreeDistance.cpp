//#include<cstdio>
//
//int depthX = 0;
//int depthY = 0;
//int tree[1000];
//int Node[1000];
//
//int returnValue(int idx) {
//	int num;
//	num = tree[idx];
//	return num;
//}
//
//void find(int x, int y) {
//	int num = x;
//	
//	if (x == 0 || y == 0) {
//		if (x == 0) num = y;
//		else num = x;
//		while (num != 0) {
//			num = returnValue(num);
//			Node[depthX++] = num;
//		}
//		depthY = 0;
//		return;
//	}
//	else {
//		while (num != 0) {
//			num = returnValue(num);
//			Node[depthX++] = num;
//		}
//		num = y;
//		for (int i = 0; i < depthX; i++) {
//			//printf("Node[%d] : %d depthX : %d depthY : %d i : %d\n", i,Node[i],depthX, depthY, i);
//			if (Node[i] == num) { depthX = i + 1;  return; }
//		}
//		depthY++;
//		while (num != 0) {
//			num = returnValue(num);
//			for (int i = 0; i < depthX; i++) {
//				//printf("Node[%d] : %d depthX : %d depthY : %d i : %d\n", i,Node[i],depthX, depthY, i);
//				if (Node[i] == num) { depthX = i + 1;  return; }
//			}
//			depthY++;
//		}
//	}
//}
//
//
//int main() {
//	int n, x, y;
//
//	scanf("%d %d %d", &n, &x, &y);
//
//	for (int i = 0; i < n-1; i++) {
//		int val, idx;
//		scanf("%d %d", &val, &idx);
//		tree[idx] = val;
//	}
//	
//	find(x, y);
//	//printf("depthX : %d depthY : %d\n", depthX, depthY);
//	printf("%d\n", depthX + depthY);
//	
//	return 0;
//}