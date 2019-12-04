//#include<cstdio>
//#include<cstring>
//struct stack {
//	int data[30];
//	int len = -1;
//	void push(int a) {
//		len++;
//		data[len] = a;
//	}
//
//	void pop(int b) {
//		if (data[len] == b) {
//			data[len] = -b;
//			if (len > 0 && data[len - 1] > 0) { data[len - 1] += data[len]; data[len] = 0; len--; }
//
//		}
//		
//		else if (data[len]>0 && data[len-1]==b) {
//			data[len - 1] = data[len] * -b; data[len] = 0; len--;
//			if (len > 0 && data[len - 1] > 0) { data[len - 1] += data[len]; data[len] = 0; len--; }
//		}
//		else if (data[len] != b) len = -5;
//		else if (data[len] > 0 && data[len - 1] != b) {
//			len = -5;
//		}
//	}
//};
//int main() {
//	char problem[31];
//	scanf("%s", problem);
//	int length = strlen(problem);
//	stack s;
//	for (int i = 0; i < length; i++) {
//		if (problem[i] == '(') s.push(-2);
//		else if (problem[i] == '[') s.push(-3);
//		else if (problem[i] == ')') {
//			s.pop(-2); 
//		}
//		else if (problem[i] == ']') {
//			s.pop(-3);
//		}
//		if (s.len == -5) break;
//	}
//	if (s.data[1] != 0 || s.len == -5) printf("%d\n", 0);
//	else printf("%d\n", s.data[0]);
//
//	return 0;
//}