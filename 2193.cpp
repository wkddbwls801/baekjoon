// 이친수

#include<iostream>
using namespace std;

unsigned long long dp[91][2];	// dp[자릿수][끝에 오는 수]

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// N자리의 이진수
	unsigned long long ans = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 2; j++) {
			if (i == 1) {
				dp[i][0] = 0;	// 존재 하지 않음
				dp[i][1] = 1;	// 1
			}

			if (i > 1) {
				if (j == 0) {	// 끝이 0으로 끝나면 0 또는 1이 올 수 있음
					dp[i][j] = dp[i - 1][0] + dp[i - 1][1];
				}

				if (j == 1) {	// 끝이 1로 끝나면 0만 올 수 있음
					dp[i][j] = dp[i - 1][0];
				}
			}
		}
	}

	ans = dp[N][0] + dp[N][1];

	cout << ans << "\n";

	return 0;
}