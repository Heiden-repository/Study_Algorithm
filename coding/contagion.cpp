//#include<cstring>
//#include<cstdio>
//
//const int MAX = 20;
//
//struct queue {
//	int data[MAX];
//	int front, rear, capacity;
//	int count = 0;
//	void create(int town) {
//		capacity = town;
//		rear = 0;
//		front = 0;
//	}
//	void push(int n) {
//		data[rear++] = n;
//		//printf("push n :%d\n", n);
//		if (rear >= 20) rear = 0;
//	}
//
//	void pop() {
//		front++;
//		count++;
//		if (front >= 20) front = 0;
//	}
//	int fro() {
//		return data[front];
//	}
//};
//
//bool data[100001];
//int main() {
//	int x = 1;
//	int count = 0;
//	queue q;
//	int town, n;
//	scanf("%d", &town);
//	scanf("%d", &n);
//	q.create(town);
//	data[n] = true;
//	q.push(n);
//	while (q.front != q.rear) {
//		x = q.fro();
//
//		q.pop();
//		printf("count: %d x : %d\n",q.count ,x);
//		if (x * 2 <= town && data[x * 2] == false) { data[x * 2] = true; q.push(x * 2); }
//		if (x / 3 != 0 && data[x / 3] == false){ data[x / 3] = true; q.push(x / 3);}
//	}
//	printf("%d\n", q.count);
//	return 0;
//}