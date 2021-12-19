// 숫자의 합

#include<iostream>
using namespace std;

int main() {
	int N;
	int sum = 0;
	char number;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> number;
		sum += number - '0';	//char형이므로 아스키코드 '0'의 값을 뺴줌
	}

	cout << sum << endl;
}