// ���
// ������ ����Ʈ�� int������ �����ϴ� ���� �ƴ� 
// double������ �����Ͽ� �Ҽ��� ����� �ǵ��� �ϴ� ��!
#include<iostream>
using namespace std;

int main() {
	double N;	// ������ ����
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