 //스티커

#include<iostream>
using namespace std;

int point[2][100000];
int dp[2][100000];	// dp[a][b] : a번째 줄의 b번째 스티커를 선택했을 때의 최댓값

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	int n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;

		for (int j = 1; j <= n; j++) {
			cin >> point[0][j];	// 첫째줄 입력
		}

		for (int k = 1; k <= n; k++) {
			cin >> point[1][k];	// 둘째줄 입력
		}

		dp[0][1] = point[0][1];
		dp[1][1] = point[1][1];

		for (int i = 2; i <= n; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + point[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + point[1][i];
		}

		cout << max(dp[0][n], dp[1][n]) << "\n";
	}
}