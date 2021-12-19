// 피보나치수 3

#include<iostream>
using namespace std;

long long n;	// n번째

struct M {
	long long data[2][2];
};

long long func(long long num);
M multiply(M a, M  b);
M divide(M a, long long n);
int mod = 1000000;

long long func(long long num) {
	M f;

	//F(1)
	f.data[0][0] = 1;
	f.data[0][1] = 1;
	f.data[1][0] = 1;
	f.data[1][1] = 0;

	// 분할
	f = divide(f, num);

	// F(n) 출력
	return f.data[0][1];
	
}

M divide(M a, long long n) {
	
	if (n > 1) {
		// n==1이 될 때까지 분할

		a = divide(a, n / 2);

		// 분할된 행렬을 다시 곱함
		a = multiply(a, a);

		// n이 홀수이면
		if (n % 2 == 1) {
			M b;

			b.data[0][0] = 1;
			b.data[0][1] = 1;
			b.data[1][0] = 1;
			b.data[1][1] = 0;

			a = multiply(a, b);
		}
	}

	return a;
}


M multiply(M a, M  b) {
	M c;

	c.data[0][0] = (a.data[0][0] * b.data[0][0] + a.data[0][1] * b.data[1][0]) % mod;
	c.data[0][1] = (a.data[0][0] * b.data[0][1] + a.data[0][1] * b.data[1][1]) % mod;
	c.data[1][0] = (a.data[1][0] * b.data[0][0] + a.data[1][1] * b.data[1][0]) % mod;
	c.data[1][1] = (a.data[1][0] * b.data[0][1] + a.data[1][1] * b.data[1][1]) % mod;

	return c;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	cout << func(n) << "\n";
}