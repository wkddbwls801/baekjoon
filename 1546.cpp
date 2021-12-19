// 평균
// 문제의 포인트는 int형으로 선언하는 것이 아닌 
// double형으로 선언하여 소수점 계산이 되도록 하는 것!
#include<iostream>
using namespace std;

int main() {
	double N;	// 과목의 개수
	double subject[1000] = { 0, };
	double max = 0;
	double sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> subject[i];
	}

	for (int j = 0; j < N; j++) {
		if (max < subject[j]) {
			max = subject[j];
		}
	}

	for (int k = 0; k < N; k++) {
		subject[k] = subject[k] / max * 100;
	}

	for (int n = 0; n < N; n++) {
		sum += subject[n];
	}

	cout << sum / N << endl;
}