// 빠른 A+B

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	int T;	// 테스트 케이스
	int A;
	int B;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}

	return 0;
}
