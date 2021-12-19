// 2*n 타일링

#include<iostream>
using namespace std;

unsigned long long dp[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;	// 크기

	cin >> n;

	dp[1] = 1;
	dp[2] = 2;

	// n = 1일 때는 1가지
	// n = 2일 때는 2를 1과 2를 통해서 표현하는 방법의 가짓 수
	// n = 3일 때는 3을 1과 2를 통해서 표현하는 방법의 가짓 수
	// 즉, n = 2일때의 방법의 수에서 1만 더하면 되고. n = 1일때의 방법의 수에서 2만 더하면 됨.
	// 여기서 왜 1과 2이냐?
	// 직사각형이 1*2, 2*1이므로, 가로만 따졌을 때, 윗줄이 1 또는 2로 채워져야 함.
	// 아랫줄을 알아서 남는거 넣으면 되므로 신경 x

	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= 10007;
		// 중간에 mod 연산을 해도 값은 동일한가?
		// (A + B) % M = (A % M + B % M) % M 이 성립함.
		// 그래서 중간에 mod 연산을 해도 값은 변하지 않음.	
	}

	cout << dp[n] << "\n";
}