//#include<cstring>
//#include<cstdio>
//
//struct stack {
//	int data[100000];
//	int curr;
//	int hor;
//	int ver = 2;
//	int area;
//	int temp1;
//	int temp2;
//	int push(int num) {
//		data[curr] = num;
//		curr++;
//		temp1 = num;
//		hor = num;
//		if (curr == 1) return num;
//		for (int i = curr - 2; i >= 0; i--) {
//			if (data[i] < hor) {
//				temp2 = ver * data[i];
//				hor = data[i];
//			}
//			else {
//				temp2 = hor * ver;
//			}
//			if (temp1 < temp2) temp1 = temp2;
//			ver++;
//		}
//		if (area < temp1) area = temp1;
//		temp1 = 0;
//		temp2 = 0;
//		hor = 0;
//		ver = 2;
//		return area;
//	}
//};
//
//stack s;
//
//int main() {
//	int n;
//	int area;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int num;
//		scanf("%d", &num);
//		area = s.push(num);
//	}
//	printf("%d\n", area);
//}