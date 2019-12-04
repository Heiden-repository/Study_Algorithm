//#include <stdio.h>
//
//struct queue {
//	int data[1000];
//	int front, rear;
//	int capacity;
//
//	void create(int y) {
//		capacity = y;
//		front = 0;
//		rear = 0;
//	}
//
//	void push(int y) {
//		if (rear >= capacity) {
//			printf("Overflow\n");
//		}
//		else {
//			data[rear++] = y;
//		}
//	}
//
//	void pop() {
//		if (front >= capacity || front==rear) {
//			printf("Underflow\n");
//		}
//		else {
//			data[front] = 0;
//			front++;
//		}
//	}
//
//	int showFront() {
//		if (rear - front <= 0) {
//			return -1;
//		}
//		else {
//			return data[front];
//		}
//	}
//
//	int size() {
//		return rear - front;
//	}
//};
//
//int main() {
//	queue q1;
//	int size;
//	int n;
//	scanf("%d", &size);
//	scanf("%d", &n);
//	q1.create(size);
//	for (int i = 0; i < n; i++) {
//		int num;
//		scanf("%d", &num);
//		if (num == 1) { scanf("%d", &num); q1.push(num); }
//		else if (num == 2) q1.pop();
//		else if (num == 3) { num = q1.showFront(); if(num == -1)printf("NULL\n"); else printf("%d\n", num); }
//	}
//
//	return 0;
//}