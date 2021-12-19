// 검증수
// 문제의 포인트 : 나머지 연산, 제곱 연산
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num[5];	// 고유 번호 5개
	int sum = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int j = 0; j < 5; j++) {
		sum += pow(num[j], 2);
	}

	cout << sum % 10 << endl;
}