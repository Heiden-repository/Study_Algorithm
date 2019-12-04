//#include <cstdio>
//
//const int MAX =  100;
//
//struct PriorityQueue {
//	int data[MAX];
//	int len = 1;
//
//	void push(int x) {
//		data[len++] = x;
//
//		int inx = len - 1;
//		while (inx > 1) {
//			if (data[inx] < data[inx / 2]) {
//				int temp = data[inx];
//				data[inx] = data[inx / 2];
//				data[inx / 2] = temp;
//			}
//			else break;
//
//			inx = inx / 2;
//		}
//	}
//	void pop() {
//		data[1] = data[len - 1];
//		data[len - 1] = 0;
//		len--;
//
//		int inx = 1;
//		while (1) {
//			int pInx = -1;
//
//			if (len <= inx * 2) break;
//			else if (1 <= inx * 2 && inx * 2 < len && len <= inx * 2 + 1) {
//				pInx = inx * 2;
//			}
//			else {
//				if (data[inx * 2] < data[inx * 2 + 1])
//					pInx = inx * 2;
//				else
//					pInx = inx * 2 + 1;
//
//			}
//
//			if (data[inx] > data[pInx]) {
//				int temp = data[inx];
//				data[inx] = data[pInx];
//				data[pInx] = temp;
//
//				inx = pInx;
//			}
//			else break;
//		}
//	}
//
//	int top() {
//		return data[1];
//	}
//};
//
//int main() {
//	PriorityQueue myPQ;
//	myPQ.push(3);
//	myPQ.push(1);
//	myPQ.push(2);
//	
//	printf("%d\n", myPQ.top());
//	myPQ.pop();
//
//	printf("%d\n", myPQ.top());
//	myPQ.pop();
//
//	printf("%d\n", myPQ.top());
//	myPQ.pop();
//	return 0;
//}