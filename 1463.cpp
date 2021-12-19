// 1로 만들기
// bottom-up 방식

#include<iostream>
using namespace std;

int dp[1000000];

int solution(int x) {
	if (x == 1) {
		return 0;
	}

	if (dp[x] != 0) {	// 메모이제이션, 여기서 dp[2], dp[3]이 저장됨.
		return dp[x];
	}
	
	dp[x] = dp[x - 1] + 1;	// 1을 뺐을 때의 횟수

	if (x % 3 == 0) {	
		int tmp = dp[x / 3] + 1;	// 3으로 나누었을 때의 횟수

		if (dp[x] > tmp) {
			dp[x] = tmp;
		}
	}

	if (x % 2 == 0) {
		int tmp = dp[x / 2] + 1;	// 2로 나누었을 때의 횟수

		if (dp[x] > tmp) {
			dp[x] = tmp;
		}
	}

	return dp[x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// 정수

	cin >> N;

	cout << solution(N) << "\n";
}