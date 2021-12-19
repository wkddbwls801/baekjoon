// 수들의 합2

#include<iostream>
#include<algorithm>
using namespace std;

int A[10000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int M;
	int start = 0;
	int end = 0;
	int sum = 0;
	int cnt = 0;
	
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}


	while (start < N && end < N) {

		sum = 0;

		for (int j = start; j <= end; j++) {
			sum += A[j];
		}

		if (sum > M) {
			start++;
		}

		else if (sum < M) {
			end++;
		}

		else {
			cnt++;
			end++;
		}
	}

	cout << cnt << "\n";
}