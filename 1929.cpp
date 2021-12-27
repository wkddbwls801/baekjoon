// 소수 구하기
// 에라토스테네스의 체

#include<iostream>
#include<cmath>
using namespace std;

int M;
int N;
int arr[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N;

	for (int i = 2; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= sqrt(N); i++) {
		if (arr[i] == 0) {
			continue;
		}

		for (int j = 2 * i; j <= N; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = M; i <= N; i++) {
		if (arr[i] != 0) {
			cout << arr[i] << "\n";
		}
	}
}