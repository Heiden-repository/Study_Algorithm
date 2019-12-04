//#include<stdio.h>
//struct Stack {
//	int data[100];
//	int len = 0;
//	int capacity = 0;
//
//	void create(int y) {
//		capacity = y;
//	}
//	void push(int y) {
//		if (len >= capacity) {
//			printf("Overflow\n");
//		}
//		else {
//			data[len++] = y;
//		}
//	}
//	void pop() {
//		if (len <= 0) {
//			printf("Underflow\n");
//		}
//		else {
//			data[len - 1] = 0;
//			len--;
//		}
//	}
//	int top() {
//		if (len <= 0) {
//			return -1;
//		}
//		else {
//			return data[len - 1];
//		}
//	}
//	int size() {
//		return len;
//	}
//};
//
//int main() {
//	Stack s;
//	int size, n;
//	scanf("%d", &size);
//	scanf("%d", &n);
//	s.create(size);
//	int n2 = 0;
//	while (n2 < n) {
//		n2++;
//		int num;
//		scanf("%d", &num);
//		switch (num) {
//		case 1:
//			scanf("%d", &num);
//			s.push(num);
//			break;
//		case 2:
//			s.pop();
//			break;
//		case 3:
//			int rNum = s.top();
//			if (rNum == -1) printf("Null\n");
//			else printf("%d", rNum);
//			break;
//		}
//	}
//	return 0;
//}