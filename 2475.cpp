// ������
// ������ ����Ʈ : ������ ����, ���� ����
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num[5];	// ���� ��ȣ 5��
	int sum = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	for (int j = 0; j < 5; j++) {
		sum += pow(num[j], 2);
	}

	cout << sum % 10 << endl;
}