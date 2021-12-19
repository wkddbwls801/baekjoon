// 링

#include<iostream>
#include<algorithm>
using namespace std;

int N;	// 링의 개수
int r[101];

int gcd(int a, int b) {
	
	if (a < b) {
		swap(a, b);
	}
	
	int c = a % b;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> r[i];	//r[0]이 기준이 됨.
	}

	for (int i = 1; i < N; i++) {
		int g = gcd(r[0], r[i]);

		cout << r[0] / g << "/" << r[i] / g << "\n";
	}
}