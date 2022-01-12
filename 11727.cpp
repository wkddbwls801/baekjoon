// 2*n 타일링 2

#include<iostream>
using namespace std;

int n;
int dp[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	dp[1] = 1;
	dp[2] = 3;
	
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
	}

	cout << dp[n] % 10007 << "\n";
}
