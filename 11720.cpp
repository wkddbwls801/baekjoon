// ������ ��

#include<iostream>
using namespace std;

int main() {
	int N;
	int sum = 0;
	char number;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> number;
		sum += number - '0';	//char���̹Ƿ� �ƽ�Ű�ڵ� '0'�� ���� ����
	}

	cout << sum << endl;
}