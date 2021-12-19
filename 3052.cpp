// 나머지

#include<iostream>
using namespace std;

int main() {
	int divisor[10] = { 0 };
	int num;
	int output[10] = { 0 };
	int k = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		divisor[i] = num % 42;
	}

	// divisor[p] : 고정 값(앞쪽 값)
	// divisor[j] : 비교 값(뒤쪽 값)
	// 앞쪽 값과 뒤쪽 값을 비교하여 다르면 고정 값 변경
	// 앞쪽 값과 뒤쪽 값이 같으면 비교 값 변경
	// 결국 p와 j가 같아지면 처음부터 끝까지 비교하였을 때 모두 같았다는 소리
	// p와 j가 같다는 소리는 서로 중복 값이라는 의미이므로
	// output배열에 들어가게 됨.

	for (int j = 0; j < 10; j++) {
		int p = 0;	

		while (p < j && divisor[p] != divisor[j]) {
			p++;
		}

		if (p == j) {
			output[k] = divisor[j];
			k++;
		}
	}

	// 마지막에 k++로 나오므로 k+1을 안 해도 됨.
	cout << k << endl;
}