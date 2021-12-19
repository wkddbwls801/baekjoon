// ���

#include<iostream>
using namespace std;

bool chess[11][11];
bool visited1[11];	// �����ʿ��� �������� ���� �밢��
bool visited2[11];	// ���ʿ��� ���������� ���� �밢��
int bishop[2];	// 0�� ������, 1�� ���
int N;

void DFS(int cnt, int x, int y, int color) {
	if (y >= N) {
		x++;

		// ���������� ������� ���� ������ �� ���� ���� ��ġ�� �ٸ�
		// �̸� ����ϴ� �ڵ�
		if (y % 2 == 0) {
			y = 1;
		}

		else {
			y = 0;
		}
	}
	
	// ������ �� Ž�� �Ϸ�
	if (x >= N) {
		if (cnt > bishop[color]) {
			bishop[color] = cnt;
		}

		return;
	}

	// ����� ���� �� �����鼭 �밢���� �ٸ� ������ ���� ���
	if (chess[x][y] && !visited1[x + y + 1] && !visited2[y - x + N]) {
		
		visited1[x + y + 1] = true;
		visited2[y - x + N] = true;

		DFS(cnt + 1, x, y + 2, color);

		// ��Ʈ��ŷ���� ���ƿ��� ����� �����ϰ� �������� �Ѿ����.
		visited1[x + y + 1] = false;
		visited2[y - x + N] = false;
	}

	DFS(cnt, x, y + 2, color);
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> chess[i][j];
		}
	}


	DFS(0, 0, 0, 0);
	DFS(0, 0, 1, 1);

	cout << bishop[0] + bishop[1] << "\n";
}