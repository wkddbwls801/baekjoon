// ������

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

	// divisor[p] : ���� ��(���� ��)
	// divisor[j] : �� ��(���� ��)
	// ���� ���� ���� ���� ���Ͽ� �ٸ��� ���� �� ����
	// ���� ���� ���� ���� ������ �� �� ����
	// �ᱹ p�� j�� �������� ó������ ������ ���Ͽ��� �� ��� ���Ҵٴ� �Ҹ�
	// p�� j�� ���ٴ� �Ҹ��� ���� �ߺ� ���̶�� �ǹ��̹Ƿ�
	// output�迭�� ���� ��.

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

	// �������� k++�� �����Ƿ� k+1�� �� �ص� ��.
	cout << k << endl;
}