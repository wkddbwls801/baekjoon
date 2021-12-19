// 숫자의 개수
// 문제의 포인트 : 숫자를 배열의 인수로 넣어서 풀기!

#include<iostream>
#include<string>
using namespace std;

int main() {
	int A;
	int B;
	int C;
	int result;
	int arr[10] = { 0, };	//0~9까지 들어갈 배열

	cin >> A >> B >> C;

	result = A * B * C;

	while (result != 0) {
		arr[result % 10] ++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;

}