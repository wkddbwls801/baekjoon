// 포도주 시식

#include<iostream>
using namespace std;

int wine[10000];	// 포도주
int dp[10000];	// dp 배열

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// 포도주 잔의 개수

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> wine[i];
	}
	
	dp[1] = wine[1];	// 1잔 있을 뗴
	dp[2] = wine[1] + wine[2];	// 2잔 있을 때

	for (int i = 3; i <= n; i++) {
		// wine[i]를 무조건 더하는데 wine[i-1]의 유무로 max값 확인
		dp[i] = max(dp[i - 3] + wine[i - 1], dp[i - 2]) + wine[i];

		// 이후, 이전 dp값과 비교하여 큰 값을 저장
		// 즉, wine[i]를 안 더하는 것이 더 큰 값이라는 것을 의미
		dp[i] = max(dp[i], dp[i - 1]);	
	}

	cout << dp[n] << "\n";
}