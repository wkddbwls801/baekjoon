// ACM ȣ��

#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 0;	// �׽�Ʈ ���̽�
	int H = 0;	// ȣ���� ����
	int W = 0;	// �� ���� �̾� �� ����
	int N = 0;	// �մ�


	cin >> T;

	for (int i = 0; i < T; i++) {
		int count = 0;
		cin >> H >> W >> N;

		for (int j = 1; j <= W; j++) {
			for (int k = 1; k <= H; k++) {
				count++;

				if (count == N) {
					cout << k * 100 + j << "\n";
				}
			}
		}
	}
}