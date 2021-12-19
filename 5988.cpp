// 홀수일까 짝수일까

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// 테스트 케이스
	string K;	// 확인할 정수, 정수 범위가 10^60이므로 string으로 선언

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> K;

		if (K[K.length() - 1] % 2 == 0) {	// 끝 자리만 확인하면 됨.
			cout << "even" << '\n';
		}

		else {
			cout << "odd" << '\n';
		}
	}

	return 0;
}