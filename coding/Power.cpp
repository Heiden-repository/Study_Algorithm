//#include<cstdio>
//
//using namespace std;
//
//int power(int n, long long int m) {
//	printf("n : %d m : %lld\n",n,m);
//	if (m == 1) {
//		return n;
//	}
//	else if (m % 2 == 0) {
//		m /= 2;
//		int num = power(n, m);
//		return (num * num) % 10007;
//	}
//	else {
//		m -= 1;
//		int num = power(n, m);
//		return (num * n) % 10007;
//	} 
//}
//
//int main() {
//	int n = 0;
//	long long int m;
//
//	scanf("%d %lld", &n, &m);
//
//	int sol = power(n, m);
//
//	printf("%d\n", sol);
//
//	return 0;
//}