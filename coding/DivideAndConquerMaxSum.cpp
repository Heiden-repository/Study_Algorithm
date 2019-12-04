#include<cstdio>

using namespace std;

const int MAX = 100;

int n;
int data[MAX];

int getSubMax(int start, int end) {
	if (start >= end) return data[start];

	int mid = (start + end) / 2;

	int left = getSubMax(start, mid);
	int right = getSubMax(mid + 1, end);

	int leftSum = 0, leftMax = -987987987;
	for (int i = mid - 1; i > 0; i--) {
		leftSum = leftSum + data[i];

		if (leftMax < leftSum)
			leftMax = leftSum;
	}
	int rightSum = 0, rightMax = -987987987;
	for (int i = mid + 1; i <= end; i++) {
		rightSum = rightSum + data[i];

		if (rightMax < rightSum)
			rightMax = rightSum;
	}

	int myMax = leftMax + rightMax;

	if (left >= right && left >= myMax) return left;
	else if (right >= left && right >= myMax) return right;
	else return myMax;
}

int main() {

	//1.문제를 소문제로 분할
	//2.각각의 소문제를 해결
	//3.소문제의 해결 결과를 이용해여전체문제를 해결
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &data[i]);

	printf("%d\n",getSubMax(0,n-1));
	return 0;
}