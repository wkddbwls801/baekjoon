// 소수 찾기

#include<iostream>
using namespace std;

int N;	// 개수
int arr[1001];	// 수들의 배열
int num;

bool isPrime(int num) {
	if (num < 2) {
		return false;
	}

	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	int result = 0;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (isPrime(num)) {
			result++;
		}
	}

	cout << result << "\n";
}