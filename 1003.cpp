// 피보나치 함수

#include<iostream>
using namespace std;

int fibo_zero[50];
int fibo_one[50];

//fibo(n) = fibo(n-1) + fibo(n-2)
// 즉, fibo(n-1)에서의 0의 개수와 1의 개수 + fibo(n-2)에서의 0의 개수와 1의 개수를 더한것이
// fibo(n)에서의 0의 개수와 1의 개수임.

//fibo(n) : 0의 개수	1의 개수
//fibo(0) :		1			0
//fibo(1) :		0			1
//fibo(2) :		1			1
//fibo(3) :		1			2
//fibo(4) :		2			3

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;	// 테스트 케이스
	int N;	// 정수
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;

		fibo_zero[0] = 1;
		fibo_zero[1] = 0;
		fibo_one[0] = 0;
		fibo_one[1] = 1;

		for (int i = 2; i <= N; i++) {
			fibo_zero[i] = fibo_zero[i - 1] + fibo_zero[i - 2];
			fibo_one[i] = fibo_one[i - 1] + fibo_one[i - 2];
		}

		cout << fibo_zero[N] << " " << fibo_one[N] << "\n";
	}

	return 0;

}