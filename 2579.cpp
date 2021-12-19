// 계단 오르기

#include<iostream>
using namespace std;

int arr[300];	// 각 계단에 적힌 수를 모아놓은 배열
int dp[300];	// 최대값 확인할 배열

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;	// 계단의 수

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];	// 계단이 1개 있을 때
	dp[2] = max(arr[1] + arr[2], arr[2]);	// 계단이 2개 있을 때
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);	//계단이 3개 있을 때

	for (int i = 4; i <= n; i++) {

		// 무조건 마지막 계단은 밟아야 하므로 arr[i]는 더해야 함
		// i-1번째 계단을 밟고 i번째 계단을 밟을지,
		// i-2번째 계단을 밟고 i번째 계단을 밟을지로 구분
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}

	cout << dp[n] << "\n";
}