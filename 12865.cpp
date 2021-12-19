// ����� �賶

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;	// ��ǰ�� ��
int K;	// ��ƿ �� �ִ� ����
int W[101];	// ������ ����
int V[101];	// ������ ��ġ
int dp[101][100001];
int result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> W[i] >> V[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			if (W[i - 1] <= j) {
				dp[i][j] = max(V[i - 1] + dp[i - 1][j - W[i - 1]], dp[i - 1][j]);
			}

			else {
				dp[i][j] = dp[i - 1][j];
			}

			result = max(dp[i][j], result);
		}
	}

	cout << result << "\n";
}