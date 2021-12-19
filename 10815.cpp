// 숫자 카드

#include<iostream>
#include<algorithm>
using namespace std;

int A[500000];
int B[500000];

int main() {
	int N;
	int M;
	int left;
	int right;
	int result;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	cin >> M;

	for (int j = 0; j < M; j++) {
		cin >> B[j];
	}

	sort(A, A + N);

	for (int k = 0; k < M; k++) {
		left = 0;
		right = N - 1;
		result = 0;
		int findN = B[k];

		while (left <= right) {
			int mid = (left + right) / 2;

			if (A[mid] > findN) {
				right = mid - 1;
			}

			else if (A[mid] < findN) {
				left = mid + 1;
			}

			else {
				result = 1;
				break;
			}
		}

		cout << result << " ";
	}
}