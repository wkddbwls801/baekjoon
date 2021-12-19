// ��� ����

#include<iostream>
#define ll long long
using namespace std;

ll a;	// ����
ll r;	// ����
ll n;	// ���� ��
ll mod;	// ������

ll mypow(ll ratio, ll num) {
	
	// ratio^0�̸� 1
	if (num == 0) {
		return 1;
	}

	// ���� ���� ¦���� ���
	if (num % 2 == 0) {
		return mypow((ratio * ratio) % mod, num / 2) % mod;
	}

	// �������� Ȧ���� ���
	else {
		return (ratio * mypow((ratio * ratio) % mod, (num - 1) / 2)) % mod;
	}
}

// func(ù ��° ��(0), ������ �� (n-1), ������ (n))
ll func(ll x, ll y, ll size) {
	if (size == 1) {
		return (a * mypow(r, x)) % mod;
	}

	// ���� ���� ¦�� �� ��
	if (size % 2 == 0) {
		return (func(x, x + (size / 2) - 1, size / 2) * (mypow(r, (size / 2)) + 1) ) % mod;
	}

	// ���� ���� Ȧ�� �� ��
	else {
		return (func(y, y, 1) + func(x, x + (size / 2) - 1, size / 2) * (mypow(r, (size / 2)) + 1)) % mod;
	}
}

int main() {
	cin >> a >> r >> n >> mod;

	cout << func(0, n - 1, n);

}
