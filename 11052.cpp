// ī�� �����ϱ�
// N���� �����ϴµ��� �ִ� ���
// DP[N] vs DP[N-a] + PS[a]
// �������� 1��¥���� �����Ѵٰ� �����ϸ�, �� ������ N-1���� ī�带 �ִ� ������� �����ؾ���
// ��, DP[N-1] + PS[1]
// 2~N���� ����� �ϸ�
// DP[N-a] + PS[a]��.
// �̸� DP[N]�� ��!

#include<iostream>
using namespace std;

int PS[10000];	// PSī���� ��
int dp[10000];	//dp �迭

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// ī���� ����

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> PS[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + PS[j]);
		}
	}

	cout << dp[N] << "\n";

}