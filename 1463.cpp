// 1�� �����
// bottom-up ���

#include<iostream>
using namespace std;

int dp[1000000];

int solution(int x) {
	if (x == 1) {
		return 0;
	}

	if (dp[x] != 0) {	// �޸������̼�, ���⼭ dp[2], dp[3]�� �����.
		return dp[x];
	}
	
	dp[x] = dp[x - 1] + 1;	// 1�� ���� ���� Ƚ��

	if (x % 3 == 0) {	
		int tmp = dp[x / 3] + 1;	// 3���� �������� ���� Ƚ��

		if (dp[x] > tmp) {
			dp[x] = tmp;
		}
	}

	if (x % 2 == 0) {
		int tmp = dp[x / 2] + 1;	// 2�� �������� ���� Ƚ��

		if (dp[x] > tmp) {
			dp[x] = tmp;
		}
	}

	return dp[x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// ����

	cin >> N;

	cout << solution(N) << "\n";
}