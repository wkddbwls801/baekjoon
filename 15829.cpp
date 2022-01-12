// Hashing

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

char str[51];	// 문자열
long long str_hash[51];
int L;	// 문자열 길이
long long  H;
long long temp;
long long cnt = 1;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> L;

	for (int i = 0; i < L; i++) {
		cin >> str[i];
		str_hash[i] = str[i] - 'a' + 1;
	}

	for (int i = 0; i < L; i++) {
		temp = str_hash[i] * cnt;
		temp %= 1234567891;
		H += temp;
		cnt = cnt * 31 % 1234567891;
		H %= 1234567891;
	}

	cout << H << "\n";
}
