// º≥≈¡ πË¥ﬁ

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// º≥≈¡¿« π´∞‘
	int cnt = 0;	// »Ωºˆ

	cin >> N;

	while (N > 0) {
		if (N % 5 == 0) {
			N -= 5;
			cnt++;
		}

		else if (N % 3 == 0) {
			N -= 3;
			cnt++;
		}

		else if (N > 5) {
			N -= 5;
			cnt++;
		}

		else {
			cnt = -1;
			break;
		}
	}

	cout << cnt << "\n";
}