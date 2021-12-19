// 최소공배수

#include<iostream>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}

	else {
		return GCD(b, a % b);	// 유클리드 알고리즘 사용
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;	// 테스트 케이스
	int A;
	int B;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;

		if (A > B) {
			cout << A * B / GCD(A, B) << "\n";
		}

		else {
			cout << A * B / GCD(B, A) << "\n";
		}
	}

	return 0;
}