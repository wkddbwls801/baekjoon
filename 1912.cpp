// 연속합

#include<iostream>
using namespace std;

int num[100000];	// 정수의 배열
int dp[100000];	// dp 배열

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// 정수 개수
	int output;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	output = dp[0] = num[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(num[i], dp[i - 1] + num[i]);
		output = max(output, dp[i]);	// dp 배열에 있는 연속합들 중 가장 큰 수 저장
	}


	cout << output << "\n";
}