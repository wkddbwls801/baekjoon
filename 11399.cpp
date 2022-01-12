// ATM

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct people_info {
	int num;
	int time;
};

bool operator<(people_info p1, people_info p2) {
	if (p1.time == p2.time) {
		return p1.num < p2.num;
	}

	return p1.time < p2.time;
}

int N;
vector<people_info> p;
int t;
int dp[1001];
int result;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> t;
		p.push_back({ i, t });
	}

	// 시간이 적게 걸리는 순서대로 정렬
	sort(p.begin(), p.end());

	dp[0] = p[0].time;
	result = dp[0];

	for (int i = 1; i < N; i++) {
		dp[i] = dp[i - 1] + p[i].time;
		result += dp[i];
	}

	cout << result << "\n";
}