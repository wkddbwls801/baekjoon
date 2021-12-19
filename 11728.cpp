// 배열 합치기

#include<iostream>
#include<algorithm>
using namespace std;

int sum[2000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	int M;

	cin >> N >> M;

	for (int i = 0; i < N + M; i++) {
		cin >> sum[i];
	}

	sort(sum, sum + (N + M));

	for (int j = 0; j < N + M; j++) {
		cout << sum[j] << " ";
	}
}

