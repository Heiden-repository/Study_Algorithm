//#include <stdio.h>
//const int MAX = 10;
//
//struct Queue {
//	int data[MAX];
//	int front, rear;
//	int capacity;
//	int numElement;
//
//	void create(int y) {
//		capacity = y;
//		front = 0;
//		rear = 0;
//		numElement = 0;
//	}
//
//	void push(int y) {
//		if (numElement >= capacity) {
//			printf("Queue overflow!\n");
//		}
//		else {
//			data[rear++] = y;
//			rear = (rear+1) % MAX;
//
//			numElement++;
//		}
//	}
//
//	void pop() {
//		if (numElement <= 0) {
//			printf("Queue underflow!\n");
//		}
//		else {
//			data[front] = 0;
//			front++;
//			front = (front+1) % MAX;		
//
//			numElement++;
//		}
//	}
//
//	int front() {
//		if (numElement <= 0) {
//			return -1;
//		}
//		else {
//			return data[front];
//		}
//	}
//
//	int size() {
//		return numElement;
//	}
//};
//
//int main() {
//	Queue q1;
//	q1.create(4);
//
//	return 0;
//}