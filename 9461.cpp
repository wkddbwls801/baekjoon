// 파도반 수열

#include<iostream>
using namespace std;

int T;	// 테스트 케이스
int N;	// 수
long long p[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		cin >> N;

		p[0] = 0;
		p[1] = 1;
		p[2] = 1;
		p[3] = p[2];	// 1
		p[4] = p[1] + p[3];	//2

		for (int i = 5; i <= N; i++) {
			p[i] = p[i - 5] + p[i - 1];
		}

		cout << p[N] << "\n";
	}
	
}