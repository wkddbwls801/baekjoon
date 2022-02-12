// ����Ʈ�� �̵�

#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

int T;	// �׽�Ʈ ���̽�
int l;	// ü������ �� ���� ����
int chess[301][301];
int now_x;	// ����Ʈ�� ���� �ִ� ĭ
int now_y;	// ����Ʈ�� ���� �ִ� ĭ
int next_x;	// ����Ʈ�� �̵��Ϸ��� �ϴ� ĭ
int next_y;	// ����Ʈ�� �̵��Ϸ��� �ϴ� ĭ
int move_x[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int move_y[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };
bool visit[301][301];
int output[301][301];
queue<pair<int, int>> q;

void BFS(int x, int y) {
	visit[x][y] = true;
	q.push({ x, y });
	output[x][y] = 0;

	while (!q.empty()) {
		for (int i = 0; i < 8; i++) {
			int front_x = q.front().first;
			int front_y = q.front().second;

			int nx = front_x + move_x[i];
			int ny = front_y + move_y[i];

			if (nx >= 0 && nx < l && ny >= 0 && ny < l) {
				if (visit[nx][ny] == false) {
					if (output[nx][ny] == 0) {
						output[nx][ny] = output[front_x][front_y] + 1;
					}
					
					q.push({ nx, ny });
					visit[nx][ny] = true;
				}
			}
		}

		q.pop();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		memset(output, 0, sizeof(output));
		memset(visit, false, sizeof(visit));

		cin >> l;

		cin >> now_x >> now_y;
		cin >> next_x >> next_y;

		BFS(now_x, now_y);

		cout << output[next_x][next_y] << "\n";
	}
}