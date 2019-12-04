//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//struct stack {
//	char data[100];
//	int count = 0;
//	char nowChar = 'a';
//	int push() {
//		data[count++] = nowChar;
//		nowChar++;
//		return 1;
//	}
//	int pop() {
//		count--;
//		return 2;
//	}
//};
//int main() {
//	char needs[27];
//	scanf("%s", needs);
//	int len = strlen(needs);
//	int pushCount = 1;
//	stack s;
//	int count = 0;
//	int result[1000];
//	int order = 0;
//	result[order++] = s.push();
//	while (count<len) {
//		if (pushCount > len) { result[0] = -1; break; }
//		else if (needs[count] == s.data[s.count-1]) { result[order++] = s.pop(); count++; }
//		else if (needs[count] != s.data[s.count-1]) { result[order++] = s.push(); pushCount++;}
//	}
//	for (int i = 0; i <= order; i++) {
//		if (result[0] == -1) { printf("impossible\n"); break; }
//		if (result[i] == 1) printf("push\n");
//		else if (result[i] == 2) printf("pop\n");
//	}
//	return 0;
//}