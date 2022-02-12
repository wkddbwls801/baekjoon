// �ϱ��

#include<iostream>
#include<map>
using namespace std;

int T;	// �׽�Ʈ ���̽�
int N;	// ��ø 1�� ������� ������ ����
int M;	// ��ø 2�� ������� ������ ����
int num_1;	// ��ø 1�� ���� �ִ� ����
int num_2;	// ��ø 2�� ���� �ִ� ����

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		map<int, int> note;

		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> num_1;

			note.insert({ num_1, 1 });
		}
		

		cin >> M;

		for (int i = 0; i < M; i++) {
			cin >> num_2;

			// ���� ���
			if (note.find(num_2) == note.end()) {
				cout << 0 << "\n";
			}

			else {
				cout << 1 << "\n";
			}
		}
	}
}