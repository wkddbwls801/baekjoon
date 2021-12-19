// ������ �ý�

#include<iostream>
using namespace std;

int wine[10000];	// ������
int dp[10000];	// dp �迭

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// ������ ���� ����

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> wine[i];
	}
	
	dp[1] = wine[1];	// 1�� ���� ��
	dp[2] = wine[1] + wine[2];	// 2�� ���� ��

	for (int i = 3; i <= n; i++) {
		// wine[i]�� ������ ���ϴµ� wine[i-1]�� ������ max�� Ȯ��
		dp[i] = max(dp[i - 3] + wine[i - 1], dp[i - 2]) + wine[i];

		// ����, ���� dp���� ���Ͽ� ū ���� ����
		// ��, wine[i]�� �� ���ϴ� ���� �� ū ���̶�� ���� �ǹ�
		dp[i] = max(dp[i], dp[i - 1]);	
	}

	cout << dp[n] << "\n";
}