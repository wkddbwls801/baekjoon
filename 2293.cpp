// 동전1
#include<iostream>
using namespace std;

int arr[101];
int dp[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	// n가지 종류
	int k;	// 가치의 합이 k

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dp[0] = 1;

	// 0으로 초기화가 되어있으므로
	// += 연산이 가능
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= k; j++) {
			dp[j] += dp[j - arr[i]];
		}
	}

	cout << dp[k] << "\n";

}