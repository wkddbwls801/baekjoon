// ����� ����

#include<iostream>
#include<cstring>
using namespace std;

int M;	// ���� ����
int N;	// ���� ����
int move_x[4] = { -1, 1, 0, 0 };	// �����¿�
int move_y[4] = { 0, 0, -1, 1 };	// �����¿�
int land[51][51];
bool visit[51][51];

void DFS(int value_x, int value_y ) {
	visit[value_x][value_y] = true;

	for (int i = 0; i < 4; i++) {
		int next_x = value_x + move_x[i];
		int next_y = value_y + move_y[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < M) {
			if (land[next_x][next_y] == 1) {
				if (!visit[next_x][next_y]) {
					DFS(next_x, next_y);
				}
			}
			
		}

		else {
			continue;
		}
	}
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;	// �׽�Ʈ ���̽�
	int K;	// ���� ����
	int X;	// ������ ��ġ(��)
	int Y;	// ������ ��ġ(��)
	int cnt;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;

		cnt = 0;
		memset(visit, false, sizeof(visit));
		memset(land, 0, sizeof(land));

		for (int i = 0; i < K; i++) {
			cin >> X >> Y;

			land[Y][X] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (land[i][j] == 1) {
					if (!visit[i][j]) {
						cnt++;
						DFS(i, j);
					}
				}

			}
		}

		cout << cnt << "\n";
	}
}