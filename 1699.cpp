// 제곱수의 합
// dp[i]와 dp[i - j * j]와 비교하는 이유
// dp[1] = 1^2, dp[5] = 2^2 + 1^2
// 즉, 2^2의 항이 있냐 없냐의 차이, 즉 2보다 크거나 같은 제곱수의 항이 있는지 확인
// 그러면 i에서 i보다 작거나 같은 제곱수들을 빼서 그 dp의 값 + 1한 값과
// 모두 1의 제곱으로 표현한 값과 비교하여 작은 값을 dp[i]에 저장
// 모두 1의 제곱으로 표현한 값이 가장 큰 값이 되기 때문에 처음에 그것을 기준으로 비교함.

#include<iostream>
#include<algorithm>
using namespace std;

int dp[100000];	//dp 배열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// 자연수

	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = i;	// 모두 1의 제곱으로 표현했을 때의 개수
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j*j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	cout << dp[n] << "\n";
	
}