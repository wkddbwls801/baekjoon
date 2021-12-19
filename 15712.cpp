// 등비 수열

#include<iostream>
#define ll long long
using namespace std;

ll a;	// 초항
ll r;	// 공비
ll n;	// 항의 수
ll mod;	// 나누기

ll mypow(ll ratio, ll num) {
	
	// ratio^0이면 1
	if (num == 0) {
		return 1;
	}

	// 제곱 수가 짝수인 경우
	if (num % 2 == 0) {
		return mypow((ratio * ratio) % mod, num / 2) % mod;
	}

	// 제곱수가 홀수인 경우
	else {
		return (ratio * mypow((ratio * ratio) % mod, (num - 1) / 2)) % mod;
	}
}

// func(첫 번째 수(0), 마지막 수 (n-1), 사이즈 (n))
ll func(ll x, ll y, ll size) {
	if (size == 1) {
		return (a * mypow(r, x)) % mod;
	}

	// 항의 수가 짝수 일 때
	if (size % 2 == 0) {
		return (func(x, x + (size / 2) - 1, size / 2) * (mypow(r, (size / 2)) + 1) ) % mod;
	}

	// 항의 수가 홀수 일 때
	else {
		return (func(y, y, 1) + func(x, x + (size / 2) - 1, size / 2) * (mypow(r, (size / 2)) + 1)) % mod;
	}
}

int main() {
	cin >> a >> r >> n >> mod;

	cout << func(0, n - 1, n);

}
