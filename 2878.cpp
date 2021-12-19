// 캔디캔디

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

long long M;	// 사탕의 수
int N;	// 친구의 수
vector <long long> candy;	// 친구들이 받고싶어하는 사탕의 수
int c;
long long sum;
long long temp;
long long result;
long long answer;
long long mod = pow(2, 64);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		cin >> c;
		candy.push_back(c);
		sum += c;
	}

	sort(candy.begin(), candy.end());

	temp = sum - M;	// 친구들이 못 받는 사탕의 수

	for (int i = 0; i < N; i++) {
		result = min(candy[i], temp / (N - i));
		answer += (result * result);
		temp -= result;
	}

	cout << answer << "\n";
}