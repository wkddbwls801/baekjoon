// �ּ�, �ִ�

#include<iostream>
using namespace std;

int num[1000000] = { 0 };

int main() {
	int N;
	int min = 0;
	int max = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	// �ּҰ� ã��
	min = num[0];
	for (int j = 1; j < N; j++) {
		if (min > num[j]) {
			min = num[j];
		}
	}

	// �ִ밪 ã��
	max = num[0];
	for (int k = 1; k < N; k++) {
		if (max < num[k]) {
			max = num[k];
		}
	}

	cout << min << " " << max << endl;

	return 0;
}