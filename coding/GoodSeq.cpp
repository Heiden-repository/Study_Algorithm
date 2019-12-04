//#include<cstdio>
//
//int data[80];
//
//int check(int cur) {
//	int  i = 1;
//	while (i * 2 <= cur + 1) {
//		int right = cur - i + 1;
//		int left = right - i;
//		for (int j = 0; j < i; j++) {
//			printf("right : %d left :%d\n", data[right], data[left]);
//			if (data[left+j] != data[right+j]) { printf("data[%d] : %d exit\n",cur,data[cur]); return 1; }
//		}
//		printf("check - cur : %d i : %d right : %d left : %d \n", cur, i, right, left);
//		i++;
//	}
//	return 0;
//}
//
//void goodSeq(int cur,int n) {
//	if (cur > n) {
//		return;
//	}
//	else {
//		int i = 0;
//		int k = 1;
//		while (i == 0) {
//			data[cur] = k;
//			printf("goodSeq - cur : %d k : %d\n", cur, k);
//			i = check(cur);
//			k++;
//			if (k > 3) k = 1;
//		}
//		cur++;
//		goodSeq(cur, n);
//	}
//}
//int main() {
//	
//	int n;
//	int cur = 1;
//	data[0] = 1;
//	scanf("%d", &n);
//	goodSeq(cur,n);
//	for(int i = 0; i <=n; i++)	printf("%d", data[i]);
//	return 0;
//}