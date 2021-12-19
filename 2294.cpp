// 동전 2

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

	int n;	// n가지 종류 동전
	int k;	// 가치의 합이 k원

	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		dp[i] = 100000;	//100,000으로 초기화 왜냐면 이거보다 큰 값은 존재하지 않음.
	}

	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
		dp[coin[i]] = 1;	// coin[i]에 해당하는 dp는 1개만 사용해도 됨.
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