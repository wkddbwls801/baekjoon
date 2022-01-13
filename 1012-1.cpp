// 유기농 배추

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int T;	// 테스트 케이스
int M;	// 가로 길이
int N;	// 세로 길이
int K;	// 배추가 심어져 있는 위치의 개수
int graph[51][51];
int move_x[4] = { -1, 1, 0, 0 };
int move_y[4] = { 0, 0, -1, 1 };
int x;
int y;
bool visit[51][51];
int result;

void DFS(int x, int y) {
	visit[x][y] = true;	// 방문함을 체크

	for (int i = 0; i < 4; i++) {
		int next_x = x + move_x[i];
		int next_y = y + move_y[i];

		if (graph[next_x][next_y] == 1) {
			if (visit[next_x][next_y] == false) {
				DFS(next_x, next_y);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--) {
		memset(graph, 0, sizeof(graph));
		memset(visit, false, sizeof(visit));

		result = 0;
		cin >> M >> N >> K;

		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			graph[x][y] = 1;
		}

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (graph[i][j] == 1) {
					if (visit[i][j] == false) {
						result++;
						DFS(i, j);
					}
				}
			}
		}

		cout << result << "\n";
	}

}