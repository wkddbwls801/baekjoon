// 미로탐색

#include<iostream>
#include<queue>
using namespace std;

int N;
int M;
string maze[101];
bool visit[101][101];
int cost[101][101];

// 왼쪽, 오른쪽, 위, 아래
int move_X[4] = { -1, 1, 0, 0 };	// 가로 방향
int move_Y[4] = { 0, 0, -1, 1 };	// 세로 방향

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

			if (0 <= next_Y && next_Y < N && 0 <= next_X && next_X < M) {	// 해당 범위일 때만 움직이기
				if (maze[next_Y][next_X] == '1' && visit[next_Y][next_X] == false) {	// 값이 1이고, 방문되지 않았는지 확인
					cost[next_Y][next_X] = cost[now_Y][now_X] + 1;	// 거리 증가
					visit[next_Y][next_X] = true;	// 방문 확인
					q.push({ next_Y, next_X });	// 큐에 push
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