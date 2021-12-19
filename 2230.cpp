// 수 고르기

#include<iostream>
#include<algorithm>
using namespace std;

int A[100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int M;


	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A, A + N);

	int start = 0;
	int end = 0;
	unsigned long long diff = 0;
	unsigned long long minA = 2000000000;

	while (start < N && end < N) {
		diff = A[end] - A[start];

		if (diff >= M) {
			minA = min(minA, diff);
			start++;
		}

		else {
			end++;
		}
	}

	cout << minA << "\n";
}