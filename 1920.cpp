// ¼ö Ã£±â

#include<iostream>
#include<algorithm>
using namespace std;

int A[100000];
int B[100000];

int main() {
	int N = 0;
	int M = 0;
	int left = 0;
	int right = 0;
	int findN;
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
		
		findN = B[k];
		left = 0;
		right = N - 1;
		result = 0;

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

		cout << result << "\n";
	}
	
}