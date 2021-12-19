// X보다 작은 수

#include<iostream>
using namespace std;

int A[10000];

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);

	int N;
	int X;

	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int j = 0; j < N; j++) {
		if (A[j] < X) {
			cout << A[j] << " ";
		}
	}

	return 0;
}