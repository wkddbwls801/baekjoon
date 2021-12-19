// 1, 2, 3���ϱ�

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;	// �׽�Ʈ ���̽�
	int n;	// �־��� ����
	int dp[11] = { 0 };

	cin >> T;

	for (int i = 0; i < T; i++) {
		
		cin >> n;
		
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for (int i = 4; i <= n; i++) {
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
		}

		cout << dp[n] << "\n";
	}

	return 0;

}