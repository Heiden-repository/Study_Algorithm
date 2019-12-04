//#include<cstdio>
//const int MAX = 100;
//struct priorityQueue {
//	int data[MAX];
//	int len = 0;
//
//	void push(int x) {
//		data[len++] = x;
//	}
//
//	void pop() {
//		int myMax = -987987987, myMaxInx = -1;
//
//		for (int i = 0; i < len; i++) {
//			if (data[i] > myMax) {
//				myMax = data[i];
//				myMaxInx = i;
//			}
//		}
//		for (int i = myMaxInx; i < len; i++)
//			data[i] = data[i + 1];
//		len--;
//	}
//
//	int top() {
//		int myMax = -987987987;
//
//		for (int i = 0; i < len; i++) {
//			if(data[i] > myMax){
//				myMax = data[i];
//			}
//		}
//		return myMax;
//	}
//};
//
//int main() {
//	priorityQueue myPQ;
//	myPQ.push(1);
//	myPQ.push(8);
//	myPQ.push(7);
//	myPQ.push(5);
//	printf("%d\n", myPQ.top());
//
//	return 0;
//}