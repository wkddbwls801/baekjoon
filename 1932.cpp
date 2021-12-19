// 정수 삼각형

#include<iostream>
using namespace std;

int arr[501][501];
int dp[501][501];

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// 삼각형의 크기
	int output = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];	// 제일 위에 있는 값 저장

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
	}

	for (int k = 1; k <= n; k++) {
		output = max(output, dp[n][k]);
	}
	

	cout << output << "\n";
}