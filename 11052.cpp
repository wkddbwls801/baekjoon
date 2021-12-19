// 카드 구매하기
// N개를 구매하는데의 최대 비용
// DP[N] vs DP[N-a] + PS[a]
// 마지막에 1개짜리를 구매한다고 가정하면, 그 전에는 N-1개의 카드를 최대 비용으로 구매해야함
// 즉, DP[N-1] + PS[1]
// 2~N까지 계산을 하면
// DP[N-a] + PS[a]임.
// 이를 DP[N]과 비교!

#include<iostream>
using namespace std;

int PS[10000];	// PS카드의 값
int dp[10000];	//dp 배열

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// 카드의 개수

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