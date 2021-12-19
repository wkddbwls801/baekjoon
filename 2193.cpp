// ��ģ��

#include<iostream>
using namespace std;

unsigned long long dp[91][2];	// dp[�ڸ���][���� ���� ��]

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// N�ڸ��� ������
	unsigned long long ans = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 2; j++) {
			if (i == 1) {
				dp[i][0] = 0;	// ���� ���� ����
				dp[i][1] = 1;	// 1
			}

			if (i > 1) {
				if (j == 0) {	// ���� 0���� ������ 0 �Ǵ� 1�� �� �� ����
					dp[i][j] = dp[i - 1][0] + dp[i - 1][1];
				}

				if (j == 1) {	// ���� 1�� ������ 0�� �� �� ����
					dp[i][j] = dp[i - 1][0];
				}
			}
		}
	}

	ans = dp[N][0] + dp[N][1];

	cout << ans << "\n";

	return 0;
}