// �̷�Ž��

#include<iostream>
#include<queue>
using namespace std;

int N;
int M;
string maze[101];
bool visit[101][101];
int cost[101][101];

// ����, ������, ��, �Ʒ�
int move_X[4] = { -1, 1, 0, 0 };	// ���� ����
int move_Y[4] = { 0, 0, -1, 1 };	// ���� ����

void bfs(int y, int x) {
	visit[y][x] = true;

	queue<pair<int, int>> q;
	q.push({ y, x });
	cost[y][x] = 1;

	while (!q.empty()) {
		int now_Y = q.front().first;
		int now_X = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int next_Y = now_Y + move_Y[i];
			int next_X = now_X + move_X[i];

			if (0 <= next_Y && next_Y < N && 0 <= next_X && next_X < M) {	// �ش� ������ ���� �����̱�
				if (maze[next_Y][next_X] == '1' && visit[next_Y][next_X] == false) {	// ���� 1�̰�, �湮���� �ʾҴ��� Ȯ��
					cost[next_Y][next_X] = cost[now_Y][now_X] + 1;	// �Ÿ� ����
					visit[next_Y][next_X] = true;	// �湮 Ȯ��
					q.push({ next_Y, next_X });	// ť�� push
				}
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> maze[i];
	}
	
	bfs(0, 0);

	cout << cost[N - 1][M - 1] << "\n";
}