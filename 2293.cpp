// ����1
#include<iostream>
using namespace std;

int arr[101];
int dp[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	// n���� ����
	int k;	// ��ġ�� ���� k

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dp[0] = 1;

	// 0���� �ʱ�ȭ�� �Ǿ������Ƿ�
	// += ������ ����
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= k; j++) {
			dp[j] += dp[j - arr[i]];
		}
	}

	cout << dp[k] << "\n";

}