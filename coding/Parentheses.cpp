//#include<cstdio>
//#include<cstring>
//struct stack {
//	char data[100];
//	int len = 0;
//		
//	void push() {
//		data[len++] = '(';
//		printf("len: %d data[len-1]: %c\n", len, data[len-1]);
//	}
//	int pop() {
//		for (int i = len; i >= 0; i--) {
//			if (data[i] == '(') {
//				printf("bf : i: %d data[i]: %c\n", i, data[i]);
//				data[i] = 0; 
//				data[len] = 0;
//				printf("af : i: %d data[i]: %c\n", i, data[i]);
//				return 0;
//			}
//		}
//		return -1;
//	}
//};
//int main() {
//	char needs[51];
//	scanf("%s", needs);
//	int strLen = strlen(needs);
//	int loc = 0;
//	stack s;
//	int k = 0;
//	int sol=0;
//	while (loc < strLen) {
//		if (needs[loc] == '(') s.push();
//		else k = s.pop();
//		if (k == -1) { sol = -1; break; }
//		loc++;
//	}
//	
//	for (int i = 0; i < s.len; i++) { if (s.data[i] != 0) { sol = -1; break; } }
//	if (sol == -1) printf("NO\n");
//	else printf("YES\n");
//	return 0;
//}