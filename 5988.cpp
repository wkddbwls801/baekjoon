// Ȧ���ϱ� ¦���ϱ�

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;	// �׽�Ʈ ���̽�
	string K;	// Ȯ���� ����, ���� ������ 10^60�̹Ƿ� string���� ����

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> K;

		if (K[K.length() - 1] % 2 == 0) {	// �� �ڸ��� Ȯ���ϸ� ��.
			cout << "even" << '\n';
		}

		else {
			cout << "odd" << '\n';
		}
	}

	return 0;
}