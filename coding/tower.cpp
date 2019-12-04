//#include <cstdio>
//#include <cstring>
//struct stack {
//	int data[500000];
//	int sta = 0;
//	int curr = 0;
//
//	int push(int num) {
//		data[curr] = num;
//		curr++;
//		if (curr == 1) {
//			return 0;
//		}
//		else {
//			for (int i = curr - 2; i >= sta; i--) {
//				if (data[i] >= num) {
//					return i+1;
//				}
//			}
//			sta = curr-1;
//			return 0;
//		}
//	}
//	void pop(){}
//};
//stack s;
//int result[500000];
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	
//	int num;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		result[i] = s.push(num);
//	}
//	for (int i = 0; i < n; i++) printf("%d ", result[i]);
//	return 0;
//}