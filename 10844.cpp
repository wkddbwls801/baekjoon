// ���� ��� ��

#include<iostream>
using namespace std;

// dp[i][j] : ���̰� i�� �� ��, j�� ������ ��
int dp[101][10];	

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// ���� ����
	int output = 0;

	cin >> N;

	for (int i = 1; i < 10; i++) {	// 1�ڸ� ���� 1~9
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j + 1];	// ex,110 => i=3, j=0 <- i=2, j=1���ٰ� 0�� ���� ��.
			}

			else if (j == 9) {
				dp[i][j] = dp[i - 1][j - 1];
			}

			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}

	for (int k = 0; k < 10; k++) {
		output = (output + dp[N][k]) % 1000000000;
	}

	cout << output % 1000000000 << "\n";
}