// ���� 2

#include<iostream>
using namespace std;

int dp[100001];
int coin[101];

int min(int a, int b) {
	return(a < b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// n���� ���� ����
	int k;	// ��ġ�� ���� k��

	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		dp[i] = 100000;	//100,000���� �ʱ�ȭ �ֳĸ� �̰ź��� ū ���� �������� ����.
	}

	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
		dp[coin[i]] = 1;	// coin[i]�� �ش��ϴ� dp�� 1���� ����ص� ��.
	}


	for (int i = 1; i <= k; i++) {

		if (dp[i] == 1) {
			continue;
		}

		for (int j = 1; j <= n; j++) {

			if (i - coin[j] < 1) {
				continue;
			}
			
			dp[i] = min(dp[i], dp[i - coin[j]] + 1);
			
		}
	}
	
	if (dp[k] == 100000) {
		cout << -1 << "\n";
	}

	else {
		cout << dp[k] << "\n";
	}

}